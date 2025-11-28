

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 4, 3, 6, 8, 5, 10, 12}; // Пример массива
    int countEvenPairs = 0;

    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i+1] % 2 == 0) {
            countEvenPairs++;
        }
    }

    std::cout << "Число пар соседних четных элементов: " << countEvenPairs << std::endl;

    return 0;
}
