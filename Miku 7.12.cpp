

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int num;
    while (std::cin >> num && num != 0) {
        numbers.push_back(num);
    }
    for (size_t i = 0; i < numbers.size(); i += 2) {
        std::cout << numbers[i] << " ";
    }
    std::cout << 0 << std::endl;
    return 0;
}
