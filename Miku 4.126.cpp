

#include <iostream>
#include <string>

int main() {
    int a, b;
    std::cout << "Введите два различных целых числа a и b: ";
    std::cin >> a >> b;

    std::string result = (b % a == 0) ? "a является делителем b" : ((a % b == 0) ? "b является делителем a" : "ни одно из чисел не является делителем другого");
    std::cout << result << std::endl;

    return 0;
}
