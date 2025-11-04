

#include <iostream>

int main() {
    int count = 0;
    for (int i = 100; i <= 999; ++i) {
        if (i % 7 == 0) {
            int sum_of_digits = 0;
            int temp = i;
            while (temp > 0) {
                sum_of_digits += temp % 10;
                temp /= 10;
            }
            if (sum_of_digits % 7 == 0) {
                count++;
            }
        }
    }
    std::cout << "Количество трехзначных чисел, кратных 7 и с суммой цифр, кратной 7: " << count << std::endl;
    return 0;
}
