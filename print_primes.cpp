#include <iostream>

int main() {
    int value = 2;
    int trial_factor;
    int max_value;
    bool is_prime;

    std::cout << "Display primes up to what value? ";
    std::cin >> max_value;

    while (value <= max_value) {
        is_prime = true;
        trial_factor = 2;
        while (trial_factor < value) {
            if (value % trial_factor == 0) {
                is_prime = false;
                break;
            }
            trial_factor++;
        }
        if (is_prime)
            std::cout << value << " ";
        value++;
    }
    std::cout << '\n';
}
