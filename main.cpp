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

    std::cout << "Your choice: ";
}





int main() {

    // mainMenu
    mainMenu();
    


    // clear buffer
    std::cin.ignore();
    // Pause
    std::cin.get();
    return 0;
}