#include <iostream>
#include <string>

int main() {
    std::string word = "fred";
    std::cout << "word.length() => " << word.length() << '\n';
    std::cout << "word.empty() => " << word.empty() << '\n';

    std::string word2 = "good";
    word2 += "bye";
    std::cout << "word.substr(2, 5) => " << word2.substr(2, 5) << '\n';
}
