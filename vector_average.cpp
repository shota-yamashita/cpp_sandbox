#include <iostream>
#include <vector>

int main() {
    double sum = 0.0;
    const int NUMBER_OF_ENTRIES  = 5;
    std::vector<double> numbers(NUMBER_OF_ENTRIES);

    std::cout << "Please enter " << NUMBER_OF_ENTRIES << " numbers: ";
    
    for(int i = 0; i < NUMBER_OF_ENTRIES; i++) {
        std::cin >> numbers[i];
        sum += numbers[i];
    }
    std::cout << "The average of ";

    for(int i = 0; i < NUMBER_OF_ENTRIES - 1; i++)
        std::cout << numbers[i] << ", ";

    std::cout << numbers[NUMBER_OF_ENTRIES - 1] << " is "
                  << sum/NUMBER_OF_ENTRIES << '\n';
}
