#include <windows.h> 
#include <iostream>// для Sleep
#include <cstdio>
#include <cmath>
/*void draw_progress_bar(int percents) {
    int half = percents / 2;
    std::cout << "\r [";
    for (int i = 0; i < half; ++i) putc('#', stdout);
    for (int i = 0; i < 50 - half; ++i) putc(' ', stdout);
    std::cout << "]" << percents << '%';
    fflush(stdout);
}

int main() {
    printf("\n");
    for (int i = 0; i <= 100; ++i) {
        draw_progress_bar(i);
        Sleep(50);
    }
    printf("\n");
}*/
void drawCoordinats();
int main() {
    drawCoordinats();
    return 0;
}
void drawCoordinats() {
    char x = (char)219;
    char y = '|';
    COORD position = {0, 10};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
    for (int i = 0; i < 20; i++) {
        std::cout << x;
        if (i == 10) {
            COORD position = { 10, 0 };
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleCursorPosition(hConsole, position);
            for (int i = 0; i < 20; i++) {
                if (i == 9) continue;
                std::cout << x << '\n' << "          ";
                
            }
        }
    }

  
        
    
    

}

