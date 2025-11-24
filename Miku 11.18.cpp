

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

// Функция для проверки на простоту
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // а) Числа, делящиеся на 13 или 17
    std::vector<int> arr_div(20);
    int count = 0;
    int num = 300;
    while (count < 20) {
        if (num % 13 == 0 || num % 17 == 0) {
            arr_div[count++] = num;
        }
        num++;
    }

    // б) Первые 30 простых чисел
    std::vector<int> arr_prime(30);
    count = 0;
    num = 2;
    while (count < 30) {
        if (isPrime(num)) {
            arr_prime[count++] = num;
        }
        num++;
    }

    // Вывод для проверки
    std::cout << "Делятся на 13 или 17: ";
    for (int x : arr_div) std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Простые числа: ";
    for (int x : arr_prime) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
