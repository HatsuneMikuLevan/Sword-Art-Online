

#include <iostream>
#include <string>
#include <algorithm>

void solve_6_39(int n) {
    if (n == 0) {
        std::cout << 0 << std::endl;
        return;
    }

    std::string s = std::to_string(n);
    for (char c : s) {
        std::cout << c << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    solve_6_39(n);
    return 0;
}
