#include <iostream>
#include "scope_functions.h"

std::string secret_string(std::string passcode)
{
    std::string challenge = "Flash";

    if (passcode == challenge)
    {
        std::cout << "\033[32mThunder!\033[0m\n";
    }
    else
    {
        std::cout << "\033[31mWrong challenge code!\033[0m\n";
    }
    return "";
}
