

#include <iostream>

int main() {
    int count = 0;
    int current_number = 100;
    std::cout << "10 первых чисел, оканчивающихся на 7 и кратных 9, начиная со 100: " << std::endl;
    while (count < 10) {
        if (current_number % 10 == 7 && current_number % 9 == 0) {
            std::cout << current_number << " ";
            count++;
        }
        current_number++;
    }
    std::cout << std::endl;
    return 0;
}
