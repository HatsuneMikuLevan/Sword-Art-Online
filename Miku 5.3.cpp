
#include <iostream>

int main() {
    for (int i = 20; i <= 35; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}

#include <iostream>

int main() {
    int a;
    std::cout << "Введите число a (a <= 50): ";
    std::cin >> a;
    for (int i = a; i <= 50; ++i) {
        std::cout << i * i << std::endl;
    }
    return 0;
}

#include <iostream>

int main() {
    int b;
    std::cout << "Введите число b (b > 10): ";
    std::cin >> b;
    for (int i = 10; i <= b; ++i) {
        std::cout << i * i * i << std::endl;
    }
    return 0;
}

#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите число a: ";
    std::cin >> a;
    std::cout << "Введите число b (b > a): ";
    std::cin >> b;
    for (int i = a; i <= b; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
