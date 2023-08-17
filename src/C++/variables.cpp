#include <iostream>

int main(){
  int score = 0;

  for (int i = 0; i < 10; i++){
    // Increment score by i - Fibonacci sequence
    score += i;

    std::cout << "Score: " << score << "\n";
  }

}