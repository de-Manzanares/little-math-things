#ifndef LITTLE_MATH_THINGS_CLI_H
#define LITTLE_MATH_THINGS_CLI_H

#include <iostream>
#include <string>

class Administrative_Assistant {
public:
    static void cli();
    static void print_list_of_programs() { std::cout << program_list; }
    static void print_user_prompt() { std::cout << user_prompt; }
    static void read_user_input() { std::getline(std::cin, user_input); }
    static void direct_call();
private:
    static std::string program_list;
    static std::string user_prompt;
    static std::string user_input;
};

#endif //LITTLE_MATH_THINGS_CLI_H
