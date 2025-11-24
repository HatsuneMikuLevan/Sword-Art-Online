

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));
    std::vector<int> data(100); // Диапазон чисел, например, от 0 до 99
    for (int i = 0; i < 100; ++i) {
        data[i] = i;
    }
    std::random_shuffle(data.begin(), data.end());
    std::vector<int> uniqueData(data.begin(), data.begin() + 20);
    std::cout << "Массив из 20 неповторяющихся чисел: ";
    for (int num : uniqueData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
