#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    clock_t start_time, end_time;
    bool is_prime;

    start_time = clock();

    for (int value = 2; value <= 500000; value++) {
        is_prime = true;
        for (int trial_factor = 2; is_prime && trial_factor < value; trial_factor++)
            is_prime = (value % trial_factor != 0);
        if (is_prime)
            std::cout << value << '\n';
    }

    end_time = clock();

    std::cout << "Elapsed time: "
              << static_cast<double>(end_time - start_time)/CLOCKS_PER_SEC
              << " sec."
              << '\n';
}
