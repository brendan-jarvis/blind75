#include <iostream>

std::string secret_string(std::string passcode)
{
  std::string challenge = "Flash";

  if (passcode == challenge)
  {
    return "Thunder!\n";
  }
  else
  {
    return "Wrong answer! Try again, quickly!\n";
  }
}