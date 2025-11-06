

#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve_6_65(int a, int b) {
    std::cout << "6.65. НОД(" << a << ", " << b << ") = " << gcd(a, b) << std::endl;
}
