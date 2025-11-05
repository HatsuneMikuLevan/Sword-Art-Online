

#include <iostream>

int solve_6_38(int n) {
    if (n == 0) {
        return 0;
    }
    
    int temp_n = n;
    int position = 0;

    while (temp_n > 0) {
        position++;
        int digit = temp_n % 10;
        if (digit == 3) {
            return position;
        }
        temp_n /= 10;
    }
    return 0;
}

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    int pos = solve_6_38(n);
    std::cout << "Номер цифры 3 (считая от конца): " << pos << std::endl;
    return 0;
}
