

#include <iostream>
#include <vector>
#include <utility>

int main() {
    int a = 425;
    int b = 131;

    std::vector<std::pair<int, int>> squares;

    while (b != 0) {
        int count = a / b;
        squares.push_back({b, count});
        int temp = a % b;
        a = b;
        b = temp;
    }

    for (const auto& square : squares) {
        std::cout << "Квадратов со стороной " << square.first << ": " << square.second << std::endl;
    }

    return 0;
}
