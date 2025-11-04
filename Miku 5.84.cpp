

#include <iostream>

int main() {
    int sum = 0;
    for (int i = 100; i < 1000; i += 2) {
        sum += i;
    }
    std::cout << "Сумма всех четных трехзначных чисел: " << sum << std::endl;
    return 0;
}
