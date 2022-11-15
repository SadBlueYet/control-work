#include <iostream>
#include <fstream>
void isCharConevrtion();
void outputChar(char ch);
int main() {
	isCharConevrtion();
	return 0;
}
void isCharConevrtion() {
	std::ifstream fin;
	char ch;
	char askii;
	fin.open("sometext.txt", std::ios_base::in);
	if (!fin.is_open())return;
	while (!fin.eof()) {
		ch = fin.get();
		for (int i = 65; i < 122; i++) {
			askii = (char)i;
			if (ch == askii && i < 97) {
				ch = (char)tolower(ch);
				outputChar(ch);
				break;
			}	
			if (ch == askii && i >= 97) {
				ch = (char)toupper(ch);
				outputChar(ch);
				break;
			}
		}
	}
}
void outputChar(char ch) {
	std::ofstream fout;
	fout.open("sometext(modify).txt", std::ofstream::app);
	if (!fout.is_open()) return;
	fout << ch;
	fout.close();
}
