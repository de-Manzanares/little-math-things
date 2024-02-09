#include "includes.h"
#include <iostream>
#include <string>

int main()
{
    std::string inputLine;
    while (inputLine != "quit") {
        std::getline(std::cin, inputLine);
        if (inputLine == "flt") fermats_little_theorem();
        else if (inputLine == "llt") lucas_lehmer_test();
    }
    return 0;
}

// TODO command list
// TODO README