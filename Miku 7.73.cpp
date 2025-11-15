

#include <iostream>
#include <vector>

int main() {
    // Пример массива целых чисел
    std::vector<int> numbers = {3, 7, 21, 10, 6, 14, 1, 0, -9};
    int multiple_of_3_count = 0;
    int multiple_of_7_count = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 3 == 0) {
            multiple_of_3_count++;
        }
        if (numbers[i] % 7 == 0) {
            multiple_of_7_count++;
        }
    }

    std::cout << "Количество чисел, кратных трем: " << multiple_of_3_count << std::endl;
    std::cout << "Количество чисел, кратных семи: " << multiple_of_7_count << std::endl;
    return 0;
}
