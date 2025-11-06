

#include <iostream>

void solve_6_54() {
    int n, temp;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    int count_0 = 0;
    int count_9 = 0;
    temp = n;
    if (temp == 0) {
        count_0 = 1;
    } else {
        while (temp > 0) {
            int digit = temp % 10;
            if (digit == 0) {
                count_0++;
            } else if (digit == 9) {
                count_9++;
            }
            temp /= 10;
        }
    }

    if (count_0 > count_9) {
        std::cout << "Цифра 0 встречается чаще." << std::endl;
    } else if (count_9 > count_0) {
        std::cout << "Цифра 9 встречается чаще." << std::endl;
    } else {
        std::cout << "Цифры 0 и 9 встречаются одинаковое количество раз." << std::endl;
    }
}
