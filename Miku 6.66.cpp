

#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve_6_66(int a, int b, int c) {
    int result = gcd(gcd(a, b), c);
    std::cout << "6.66. НОД(" << a << ", " << b << ", " << c << ") = " << result << std::endl;
}
