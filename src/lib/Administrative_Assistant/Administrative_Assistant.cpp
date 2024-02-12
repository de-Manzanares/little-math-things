#include "Administrative_Assistant.h"
#include <iostream>
#include <sstream>

using AA = Administrative_Assistant;

void AA::cli()
{
    while (user_input != "quit") {
        AA::print_list_of_programs();
        AA::print_user_prompt();
        AA::read_user_input();
        AA::direct_call();
    }
}
#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
void AA::direct_call()
{
    enum program {
      zero_place_holder,
      fermats_little_theorem,
      lucas_lehmer_test
    };

    auto count_words = [](const std::string& string) {
      std::istringstream istringstream(string);
      std::string word;
      int word_count = 0;
      while (istringstream >> word) word_count++;
      return word_count;
    };

    auto is_not_integer = [](const std::string& string) {
      bool proven_not_integer = false;
      int index{};
      int character;
      while (!proven_not_integer && index < string.size()) {
          character = string[index] - '0';
          proven_not_integer = character < 0 || character > 9;
          index++;
      }
      return proven_not_integer;
    };

    //TODO direct calls
    if (user_input == "quit") {
        std::cout << "\nQuitting main application ... \n";
        exit(0);
    }
    else if (count_words(user_input) > 1) {
        std::cout << "\nToo many words\n";
    }
    else if (is_not_integer(user_input)) {
        std::cout << "\nInteger please ...\n";
    }
    else {
        switch (std::stoi(user_input)) {
        case fermats_little_theorem:std::cout << "\nComing soon.\n";
            break;
        case lucas_lehmer_test:std::cout << "\nComing soon.\n";
            break;
        default:std::cout << "\nWhat number?\n";
        }
    }

}
#pragma clang diagnostic pop
std::string AA::program_list =
        "\n"
        "1. Fermat's Little Theorem\t-\tgenerate primes and pseudo primes\n"
        "2. Lucas-Lehmer Test      \t-\ttest a Mersenne number for primality"
        "\n";

std::string AA::user_prompt =
        "\n"
        "Enter a number to run the corresponding program"
        "\n";

std::string AA::user_input{};
