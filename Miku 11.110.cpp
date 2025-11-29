

#include <iostream>
#include <vector>
#include <set>
#include <iterator>

int main() {
    // Пример массива из 30 элементов (неубывающая последовательность)
    std::vector<int> arr = {1, 1, 2, 3, 3, 3, 4, 5, 5, 6, 7, 8, 8, 9, 10, 11, 12, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    std::set<int> unique_elements(arr.begin(), arr.end());
    int count = unique_elements.size();
    std::cout << "Количество различных чисел: " << count << std::endl;
    return 0;
}
