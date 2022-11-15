#include <iostream>
void userInput();
int max(int firstNumber, int secondNumber);
void outputAnswer(int maxNumber);
int main() {
    userInput();
    return 0;
}
void userInput() {
    int firstNumber;
    int secondNumber;
    std::cin >> firstNumber >> secondNumber;
    outputAnswer(max(firstNumber, secondNumber));
    return;
}
int max(int firstNumber, int secondNumber) {
    if (firstNumber >= secondNumber) return firstNumber;
    else return secondNumber;
}
void outputAnswer(int maxNumber) {
    std::cout << maxNumber;
    return;
}
