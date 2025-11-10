
#include <iostream>

int main() {
    int sum = 0;
    int count = 0;
    int num;
    std::cout << "Введите последовательность целых чисел (завершите ввод нулем):" << std::endl;
    while (std::cin >> num && num != 0) {
        sum += num;
        count++;
    }
    std::cout << "a) Сумма всех чисел последовательности: " << sum << std::endl;
    std::cout << "б) Количество всех чисел последовательности: " << count << std::endl;
    return 0;
}
