#include <iostream>

int main() {
    double input;

    std::cout << "Enter number: ";
    std::cin >> input;
    double diff, root = 1.0;

    do {
        root = (root + input/root) / 2.0;
        std::cout << "calculating root is " << root << '\n';
        diff = root * root - input;
    }
    while (diff > 0.0001 || diff < -0.0001);

    std::cout << "Square root of " << input << " = " << root << '\n';
}
