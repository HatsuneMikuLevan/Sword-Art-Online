
#include <iostream>

int main() {
    int count = 0;
    for (int i = 100; i <= 500; ++i) {
        int sum_of_digits = 0;
        int temp = i;
        while (temp > 0) {
            sum_of_digits += temp % 10;
            temp /= 10;
        }
        if (sum_of_digits == 15) {
            count++;
        }
    }
    std::cout << "Количество чисел из интервала [100, 500], сумма цифр которых равна 15, составляет: " << count << std::endl;
    return 0;
}
