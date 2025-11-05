

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    int smallestDivisor = 0;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            smallestDivisor = i;
            break;
        }
    }
    std::cout << "Наименьший делитель, отличный от 1: " << smallestDivisor << std::endl;
    return 0;
}
