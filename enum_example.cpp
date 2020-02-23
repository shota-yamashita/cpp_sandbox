#include <iostream>

using namespace std;

enum year {
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main() {
    for(int i=Jan; i<=Dec; i++) {
        cout << i << " ";
    }
    return 0;
}
