

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {10, 20, 35, 40, 50, 60, 70, 85, 90}; // Пример массива
    int countZeroPairs = 0;

    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] % 10 == 0 && arr[i+1] % 10 == 0) {
            countZeroPairs++;
        }
    }

    std::cout << "Число пар соседних элементов, оканчивающихся на ноль: " << countZeroPairs << std::endl;

    return 0;
}
