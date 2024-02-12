#include "Administrative_Assistant.h"
#include <iostream>

using AA = Administrative_Assistant;

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
void AA::direct_call()
{
    enum program {
      zero_place_holder,
      fermats_little_theorem,
      lucas_lehmer_test
    };

    switch (user_program_call_number) {
    case fermats_little_theorem:std::cout << "You typed one";
        break;
    case lucas_lehmer_test:break;
    default:std::cout << "What number?\n";
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

int AA::user_program_call_number{};