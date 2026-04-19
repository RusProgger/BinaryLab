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

// BinaryLab 

void printBinary(int n) {

     std::cout << "Number " << n  << ": ";

    for (int i = 7; i >= 0; i--) {
        std::cout << ((n >> i) & 1);
    }
   
    std::cout << std::endl;
}


int main() {

    // mainMenu
    mainMenu();

    int number;

    bool running = true;

    int num {0};

    // choice

    while(running) {
        std::cout << "Your choice: ";

        if (!(std::cin >> number)) {

        std::cin.clear();
        std::cin.ignore(10000, '\n');

        std::cout << "Invalid input! Try again.\n";
        continue;
    }

        // switch

        switch(number) {
            case 1: {
            std::cout << "Enter number (or -1 to back): ";

            while (true)
            {
                if (!(std::cin >> num))
                {
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                    std::cout << "Invalid input! Try again: ";
                    continue;
                }

                if (num == -1)
                    break;

                printBinary(num);
                std::cout << "Enter number (or -1 to back): ";
            }
            break;
        }

                case 2: {
                localeRus();

                std::cout << "Введите число (или -1 для выхода): ";

            while (true)
            {
                if (!(std::cin >> num))
                {
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                    std::cout << "Неверный ввод! Попробуйте снова: ";
                    continue;
                }

                if (num == -1)
                    break;

                printBinary(num);
                std::cout << "Введите число (или -1 для выхода): ";
            }
            break;
        }
            case 0:
                std::cout << "GoodBye...\n";
                running = false;
                break;
            default:
                std::cout << "Unknown option! Try 1, 2 or 0.\n";
        } 
        

        //std::cout << "Unknown option! Try 1, 2 or 0.\n";

    } // while end

    
    

    // clear buffer
    std::cin.ignore();
    // Pause
    std::cin.get();
    return 0;
}