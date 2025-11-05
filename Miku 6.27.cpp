

#include <iostream>

int main() {
    int count = 0;
    int current_number = 100;
    while (current_number % 19 != 0) {
        current_number++;
    }
    std::cout << "15 первых чисел, делящихся на 19, начиная со 100: " << std::endl;
    for (int i = 0; i < 15; ++i) {
        std::cout << current_number << " ";
        current_number += 19;
    }
    std::cout << std::endl;
    return 0;
}
