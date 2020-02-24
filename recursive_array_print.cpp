#include <iostream>

void iterative_print(const int *a, int n) {
    for (int i = 0; i < n; i++)
        std::cout << a[i] << ' ';
}

void recursive_print(const int *a, int n) {
    if (n > 0) {
        std::cout << *a << ' ';
        recursive_print(a + 1, n - 1);
    }
}

int main() {
    int list[] = { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
    iterative_print(list, 11);
    std::cout << '\n';
    recursive_print(list, 11);
    std::cout << '\n';
}
