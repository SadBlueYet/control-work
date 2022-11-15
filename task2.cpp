#include <iostream>
void inputCoordinates();
int quater(int* x, int* y);
void outputAnswer(int quater);
int main() {
    inputCoordinates();
    return  0;
}
void inputCoordinates() {
    int x, y;
    std::cin >> x >> y;
    outputAnswer(quater(&x, &y));
}
int quater(int* x, int* y) {
    if (*x != 0 && *y != 0) {
        if (*x > 0 && *y > 0) return 1;
        if (*x < 0 && *y > 0) return 2;
        if (*x < 0 && *y < 0) return 3;
        else return 4;
    }
    else return 0;
}
void outputAnswer(int quater) {
    std::cout << quater;
}
