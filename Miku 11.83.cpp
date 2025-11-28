

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 5, 2, 8, 3, 9, 4, 7, 6}; // Пример массива
    int countGreater = 0;

    for (size_t i = 1; i + 1 < arr.size(); ++i) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            countGreater++;
        }
    }

    std::cout << "Число элементов, которые больше своих соседей: " << countGreater << std::endl;

    return 0;
}
