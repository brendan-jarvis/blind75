#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
    srand(time(NULL));
    int random;
    int zeroCount = 0;
    int oneCount = 0;
    
    for (int i = 0; i < 100; i++) {
        random = rand() % 2;
        if (random == 0) {
            zeroCount++;
            std::cout << "Heads\n";
        } else {
            oneCount++;
            std::cout << "Tails\n";
        }
    }

    std::cout << "\n";
    std::cout << "Total flips:\t" << zeroCount + oneCount << "\n";
    std::cout << "Heads:\t\t" << zeroCount << "\n";
    std::cout << "Tails:\t\t" << oneCount << "\n";

}