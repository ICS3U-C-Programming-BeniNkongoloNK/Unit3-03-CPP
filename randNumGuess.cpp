#include <iostream>

int main(){
    int guess;
    int randomNumber;

    srand((unsigned)time((NULL)));

    randomNumber = rand() % 9 + 1;

    std::cout << "Hello, try guessing my number. You won't get it this time: ";
    std::cin >> guess;
    std::cout << "" << std ::endl;

    if (guess == randomNumber){
        std::cout << "You got lucky this time!";
    } else {
        std::cout << "See I told you you wouldn't get it. The number was ";
        std::cout << randomNumber << std::endl;
    }
}