#include <iostream>

int main(){
  int score = 0;
  // string name var
  std::string name;

  std::cout << "Enter your name: ";
  std::cin >> name;

  for (int i = 0; i < 10; i++){
    // Increment score by i - Fibonacci sequence
    score += i;

    std::cout << "Score: " << score << "\n";
  }

  std::cout << "\nCongratulations " << name << "!\nYour score is: " << score << "\n";
}