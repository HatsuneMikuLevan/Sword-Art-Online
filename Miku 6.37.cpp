

#include <iostream>

int solve_6_37(int n) {
    if (n == 0) {
        return 0;
    }
    
    int temp_n = n;
    int position = 0;
    int result = 0;

    while (temp_n > 0) {
        position++;
        int digit = temp_n % 10;
        if (digit == 8) {
            result = position;
        }
        temp_n /= 10;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    int pos = solve_6_37(n);
    std::cout << "Номер цифры 8 (считая от конца): " << pos << std::endl;
    return 0;
}
