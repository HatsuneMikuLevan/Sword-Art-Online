#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    int result = (a % b == 0 || b % a == 0);
    std::cout << result << std::endl;
    return 0;
}
