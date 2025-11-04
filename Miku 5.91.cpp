

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int num;
    std::cout << "Введите натуральное число: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "Число должно быть натуральным." << std::endl;
        return 1;
    }

    std::vector<int> divisors;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }

    // a) Получить все его делители.
    std::cout << "а) Все делители: ";
    for (int divisor : divisors) {
        std::cout << divisor << " ";
    }
    std::cout << std::endl;

    // б) Найти сумму его делителей.
    int sum_of_divisors = std::accumulate(divisors.begin(), divisors.end(), 0);
    std::cout << "б) Сумма делителей: " << sum_of_divisors << std::endl;

    // в) Найти сумму его четных делителей.
    int sum_of_even_divisors = 0;
    for (int divisor : divisors) {
        if (divisor % 2 == 0) {
            sum_of_even_divisors += divisor;
        }
    }
    std::cout << "в) Сумма четных делителей: " << sum_of_even_divisors << std::endl;

    // г) Определить количество его делителей.
    std::cout << "г) Количество делителей: " << divisors.size() << std::endl;

    // д) Определить количество его нечетных делителей.
    int odd_divisors_count = 0;
    for (int divisor : divisors) {
        if (divisor % 2 != 0) {
            odd_divisors_count++;
        }
    }
    std::cout << "д) Количество нечетных делителей: " << odd_divisors_count << std::endl;

    // е) Определить количество его делителей. Сколько из них четных?
    int even_divisors_count = 0;
    for (int divisor : divisors) {
        if (divisor % 2 == 0) {
            even_divisors_count++;
        }
    }
    std::cout << "е) Количество делителей: " << divisors.size() << ". Из них четных: " << even_divisors_count << std::endl;

    // ж) Найти количество его делителей, больших d.
    int d;
    std::cout << "ж) Введите значение d: ";
    std::cin >> d;
    int greater_than_d_count = 0;
    for (int divisor : divisors) {
        if (divisor > d) {
            greater_than_d_count++;
        }
    }
    std::cout << "Количество делителей, больших " << d << ": " << greater_than_d_count << std::endl;

    return 0;
}
