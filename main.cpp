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

    do {
        std::cout << "Your choice: ";
        std::cin >> number;

        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cout << "Invalid input! Try again.\n";
            continue;
        }

        // switch

        switch(number) {
            case 1: 
                std::cout << "Hello en\n";
                break;
            case 2:
                localeRus();
                std::cout << "Привет";
                break;
            case 0:
                std::cout << "GoodBye...\n";
                break;
            default:
                std::cout << "Unknown option! Try 1, 2 or 0.\n";
        } 
        

        //std::cout << "Unknown option! Try 1, 2 or 0.\n";

    } while(number != 0); // while end

    
    



    
    // clear buffer
    std::cin.ignore();
    // Pause
    std::cin.get();
    return 0;
}