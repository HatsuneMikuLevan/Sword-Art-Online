

#include <iostream>

int main() {
    int count = 0;
    int current_number = 500;
    std::cout << "20 первых чисел, делящихся на 13 или 17, начиная с 500: " << std::endl;
    while (count < 20) {
        if (current_number % 13 == 0 || current_number % 17 == 0) {
            std::cout << current_number << " ";
            count++;
        }
        current_number++;
    }
    std::cout << std::endl;
    return 0;
}
