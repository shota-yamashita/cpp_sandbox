#include <iostream>
#include <limits>

int main() {
    int x;
    std::cout << "Please enter an integer: ";

    while (!(std::cin >> x)) {
        std::cout << "Bad entry, please try again: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "You entered " << x << '\n';
}
