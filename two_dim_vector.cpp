#include <iostream>
#include <iomanip>
#include <vector>

using Matrix = std::vector<std::vector<double>>;

void populate_matrix(Matrix& m) {
    std::cout << "Enter the "
              << m.size()
              << " rows of the matrix.\n";

    for (unsigned row = 0; row < m.size(); row++) {
        std::cout << "Row #"
                  << row
                  << " (enter "
                  << m[row].size()
                  << " values):";
        for (double& elem : m[row])
            std::cin >> elem;
    }
}

void print_matrix(const Matrix m) {
    for (auto row : m) {
        for (double elem : row)
            std::cout << std::setw(5) << elem;
        std::cout << '\n';
    }
}

int main() {
    int rows, columns;
    std::cout << "How many rows?";
    std::cin >> rows;
    std::cout << "How many columns? ";
    std::cin >> columns;
    Matrix mat(rows, std::vector<double>(columns));

    populate_matrix(mat);
    print_matrix(mat);
}
