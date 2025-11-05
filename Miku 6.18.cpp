

#include <iostream>
#include <cmath>

int main() {
    int a = 25;
    int b = 1;

    // a) Оператор цикла с предусловием (while)
    std::cout << "Using while loop:" << std::endl;
    int i = a;
    while (i >= b) {
        std::cout << sqrt(static_cast<double>(i)) << std::endl;
        i--;
    }

    std::cout << std::endl;

    // б) Оператор цикла с постусловием (do-while)
    std::cout << "Using do-while loop:" << std::endl;
    int j = a;
    do {
        std::cout << sqrt(static_cast<double>(j)) << std::endl;
        j--;
    } while (j >= b);

    return 0;
}
