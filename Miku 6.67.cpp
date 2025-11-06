
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve_6_67(int a, int b) {
    int result = (a * b) / gcd(a, b);
    std::cout << "6.67. НОК(" << a << ", " << b << ") = " << result << std::endl;
}
