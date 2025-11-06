

#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <algorithm>

// Функция для вычисления суммы цифр числа
long long sumDigits(long long n) {
    long long sum = 0;
    std::string s = std::to_string(n);
    for (char c : s) {
        sum += c - '0';
    }
    return sum;
}

// Функция для вычисления произведения цифр числа
long long productDigits(long long n) {
    long long product = 1;
    std::string s = std::to_string(n);
    for (char c : s) {
        product *= c - '0';
    }
    return product;
}

// Функция для получения первой цифры числа
int getFirstDigit(long long n) {
    std::string s = std::to_string(n);
    return s[0] - '0';
}

// Функция для получения последней цифры числа
int getLastDigit(long long n) {
    return n % 10;
}

int main() {
    long long num;
    std::cout << "Введите натуральное число: ";
    std::cin >> num;

    // Параметры для проверки
    long long k = 10;
    long long b = 100;
    int x = 5;
    int y = 7;
    long long a = 50;
    long long m = 15;
    long long n = 3;

    std::cout << std::endl;

    // а) сумма его цифр больше k, а само число четное
    bool condition_a = (sumDigits(num) > k) && (num % 2 == 0);
    std::cout << "а) Сумма цифр > " << k << " и число четное: " << (condition_a ? "Да" : "Нет") << std::endl;

    // б) количество его цифр есть четное число, а само число не превышает b
    bool condition_b = (std::to_string(num).length() % 2 == 0) && (num <= b);
    std::cout << "б) Количество цифр четное и число <= " << b << ": " << (condition_b ? "Да" : "Нет") << std::endl;

    // г) оно начинается цифрой x и заканчивается цифрой y
    bool condition_g = (getFirstDigit(num) == x) && (getLastDigit(num) == y);
    std::cout << "г) Начинается с " << x << " и заканчивается на " << y << ": " << (condition_g ? "Да" : "Нет") << std::endl;

    // д) произведение его цифр меньше a, а само число делится на b
    bool condition_d = (productDigits(num) < a) && (num % b == 0);
    std::cout << "д) Произведение цифр < " << a << " и число делится на " << b << ": " << (condition_d ? "Да" : "Нет") << std::endl;

    // е) сумма его цифр больше m, а само число делится на n
    bool condition_e = (sumDigits(num) > m) && (num % n == 0);
    std::cout << "е) Сумма цифр > " << m << " и число делится на " << n << ": " << (condition_e ? "Да" : "Нет") << std::endl;

    return 0;
}
