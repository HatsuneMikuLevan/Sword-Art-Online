#include <iostream>

int main() {
    long long sum = 0;
    int count = 0;
    for (int i = 1; i <= 750; ++i) {
        sum += i;
        count++;
    }
    double average = static_cast<double>(sum) / count;
    std::cout << "Среднее арифметическое: " << average << std::endl;
    return 0;
}
#include <iostream>

int main() {
    int b;
    std::cout << "Введите значение b (b > 150): ";
    std::cin >> b;

    if (b > 150) {
        long long sum = 0;
        int count = 0;
        for (int i = 150; i <= b; ++i) {
            sum += i;
            count++;
        }
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое: " << average << std::endl;
    } else {
        std::cout << "Ошибка: b должно быть больше 150." << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {
    int a;
    std::cout << "Введите значение a (a <= 200): ";
    std::cin >> a;

    if (a <= 200) {
        long long sum = 0;
        int count = 0;
        for (int i = a; i <= 200; ++i) {
            sum += i;
            count++;
        }
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое: " << average << std::endl;
    } else {
        std::cout << "Ошибка: a должно быть меньше или равно 200." << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b (b > a): ";
    std::cin >> b;

    if (b > a) {
        long long sum = 0;
        int count = 0;
        for (int i = a; i <= b; ++i) {
            sum += i;
            count++;
        }
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое: " << average << std::endl;
    } else {
        std::cout << "Ошибка: b должно быть больше a." << std::endl;
    }
    return 0;
}
