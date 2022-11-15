#include <iostream>
void outputAnswer(int counter);
int isEqualNumbers(int* number);
int* inputNumber();
int main() {
	outputAnswer(isEqualNumbers(inputNumber()));
	return 0;
}
int* inputNumber() {
	int number;
	std::cin >> number;
	return &number;
}
int isEqualNumbers(int* number) {
	int equalNumber;
	int counter = 0;
	int count = 0;
	int arrayEqualNumbers[1024];
	for (int i = 1; i < *number; i *= 10) {
		if (i < 1000) equalNumber = (*number / i) % 10;
		if (i > 999) equalNumber = *number / i;
		arrayEqualNumbers[counter] = equalNumber;
		counter++;
	}
	for (int i = 0; i < counter; i++) {
		for (int j = 0; j < counter; j++) {
			if (i == j) continue;
			if (arrayEqualNumbers[i] == arrayEqualNumbers[j]) count++;
		}
	}
	return count;
}
void outputAnswer(int counter) {
	if (counter != 0) std::cout << "true";
	if (counter == 0) std::cout << "false";
}
