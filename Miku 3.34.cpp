#include <iostream>

int main() {
    for (int x = 100; x <= 999; ++x) {
        int first_digit = x / 100;
        int remaining_number = x % 100;
        if (remaining_number * 10 + first_digit == 564) {
            std::cout << "Число x: " << x << std::endl;
            break;
        }
    }
    return 0;
}
