#include <iostream>
#include <iomanip>

int main() {
    int size;
    std::cout << "Please enter the table size: ";
    std::cin  >> size;

    int row = 1;
    while(row <= size) {
        int column = 1;
        while (column <= size) {
            int product = row * column;
            std::cout << std::setw(4) << product;
            column++;
        }
        std::cout << '\n';
        row++;
    }
}
