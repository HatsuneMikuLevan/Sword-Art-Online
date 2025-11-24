

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(10);
    if (10 > 0) arr[0] = 1;
    if (10 > 1) arr[1] = 1; 
    for (int i = 2; i < 10; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Вывод для проверки
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
