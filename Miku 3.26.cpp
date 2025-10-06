#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int number;
    std::cout << "Введите трехзначное число с разными цифрами: ";
    std::cin >> number;
    std::vector<int> digits;
    digits.push_back(number / 100);
    digits.push_back((number / 10) % 10);
    digits.push_back(number % 10);
    
    std::sort(digits.begin(), digits.end());
    
    std::cout << "Все перестановки:" << std::endl;
    do {
        std::cout << digits[0] * 100 + digits[1] * 10 + digits[2] << std::endl;
    } while (std::next_permutation(digits.begin(), digits.end()));
    
    return 0;
}
