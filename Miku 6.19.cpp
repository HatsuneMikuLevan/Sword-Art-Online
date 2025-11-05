
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n = 12345;
    std::string s = std::to_string(n);
    for (char c : s) {
        std::cout << c << std::endl;
    }
    return 0;
}
