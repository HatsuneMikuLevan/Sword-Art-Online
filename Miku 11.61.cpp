

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80}; // 8 элементов
    int sum_even_indices = 0;


    for (size_t i = 1; i < arr.size(); i += 2) {
        sum_even_indices += arr[i];
    }

    std::cout << "Сумма второго, четвертого и т.д. элементов: " << sum_even_indices << std::endl;

    return 0;
}
