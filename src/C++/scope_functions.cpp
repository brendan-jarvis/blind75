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

std::string order66(std::string passcode)
{
  std::string challenge = "Execute Order 66";

  if (passcode == challenge)
  {
    std::cout << "\033[32mRoger roger!\033[0m\n";
  }
  else
  {
    std::cout << "\033[31mACCESS DENIED!\033[0m\n";
  }
  return "";
}

std::string overload(int number)
{
  number *= number;
  return std::to_string(number);
}

std::string overload(std::string text)
{
  int number = std::stoi(text);
  number *= number;
  text = std::to_string(number);

  return text;
}