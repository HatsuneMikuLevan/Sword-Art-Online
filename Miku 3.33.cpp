#include <iostream>

int find_n(int x) {
    int last_digit = x % 10;
    int remaining_part = x / 10;
    return last_digit * 100 + remaining_part;
}

int main() {
    int x = 123;
    int n = find_n(x);
    std::cout << "Для x = " << x << ", n = " << n << std::endl;
    return 0;
}
