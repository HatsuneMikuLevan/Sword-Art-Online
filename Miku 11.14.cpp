

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 12345; 
    std::vector<int> arr(6, 0); // Массив из 6 элементов, инициализированный нулями
    int temp = n;
    int i = 0;

    while (temp > 0 && i < 6) {
        arr[i] = temp % 10;
        temp /= 10;
        i++;
    }

    // Вывод элементов массива, являющихся цифрами числа n
    for (int j = 0; j < i; ++j) {
        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;

    return 0;
}
