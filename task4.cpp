#include <iostream>
#include <fstream>
#include <string>
void theNumberOfRaws();
void outputAnswer(int* counter);
int main(){
    theNumberOfRaws();
    return 0;
}
void theNumberOfRaws() {
    std::ifstream fin;
    std::string str;
    int counter = 0;
    fin.open("text.txt", std::ios_base::in);
    if (!fin.is_open()) return;
    while (std::getline(fin, str)) {
        ++counter;
    }
    fin.close();
    outputAnswer(&counter);
}
void outputAnswer(int* counter) {
    std::cout << *counter; 
}
