#include <iostream>
#include "binary.h"

void printBinaryEng(int n) {
    std::cout << "Number " << n << ": ";

    int start = 31;

    while (start > 0 && ((n >> start) & 1) == 0)
    {
        start--;
    }

    if (start < 6)
    {
        start = 6;
    }

    for (int i = start; i >= 0; i--)
    {
        std::cout << ((n >> i) & 1);
    }

    std::cout << std::endl;
}

void printBinaryRus(int n) {
    std::cout << "Число: " << n << ": ";

    int start = 31;

    while (start > 0 && ((n >> start) & 1) == 0)
    {
        start--;
    }

    if (start < 6)
    {
        start = 6;
    }

    for (int i = start; i >= 0; i--)
    {
        std::cout << ((n >> i) & 1);
    }

    std::cout << std::endl;
}