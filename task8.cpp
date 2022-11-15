#include <iostream>
void userTlephoneNumber();
void numberTransformation(char* telephoneNumber);
int main() {
	userTlephoneNumber();
	return 0;
}
void userTlephoneNumber() {
	char telephoneNumber[11]; int counter = 0;
	do
	{
		std::cin >> telephoneNumber[counter];
		counter++;
	} while (counter != 10);
	numberTransformation(telephoneNumber);
}
void numberTransformation(char* telephoneNumber) {
	char* t = telephoneNumber;
	std::cout << "+7 (";
	for (int i = 0; i < 10; i++) {
		std::cout << t[i];
		if (i == 2) std::cout << ") ";
		if (i == 5|| i == 7) std::cout << "-";
	}
}