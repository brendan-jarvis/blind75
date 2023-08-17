#include <iostream>

int main(){
  int score = 0;

  for (int i = 0; i < 10; i++){
    score += 10;
    
    std::cout << "Score: " << score << "\n";
  }

}