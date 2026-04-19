#include <iostream>
#include <iomanip>
#include <windows.h>

// locale

void localeRus() {
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
}

// mainMenu 

void mainMenu()
{
    std::cout << "====================================\n";
    std::cout << "            BinaryLab               \n";
    std::cout << "====================================\n\n";

    std::cout << "BinaryLab is a simple tool for working\n";
    std::cout << "with binary representations of numbers.\n\n";

    std::cout << "Select language:\n\n";

    std::cout << "  1) English\n";
    std::cout << "  2) Russian\n";
    std::cout << "  0) Exit\n\n";
}





int main() {

    // mainMenu
    mainMenu();

    int number;

    // choice

    std::cout << "Your choice: ";
    std::cin >> number;

    // if(number == 1) {
    //     std::cout << "Hello";
    //     // add function
    // } else if(number == 2) {
    //     localeRus();
    //     std::cout << "Привет";
    // } else if(number == 0) {
    //     std::cout << "\nExit to program..."; 
    //     return 0;
    // }
    


    // clear buffer
    std::cin.ignore();
    // Pause
    std::cin.get();
    return 0;
}