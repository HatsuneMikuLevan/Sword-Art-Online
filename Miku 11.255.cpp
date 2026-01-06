

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {5, 4, 3, 2, 1};
    int n = arr1.size();
    std::vector<int> arr3_sum(n);
    std::vector<int> arr3_prod(n);
    std::vector<int> arr3_max(n);

    for (int i = 0; i < n; ++i) {
        // а) сумма
        arr3_sum[i] = arr1[i] + arr2[i];
        // б) произведение
        arr3_prod[i] = arr1[i] * arr2[i];
        // в) максимум
        arr3_max[i] = std::max(arr1[i], arr2[i]);
    }

    std::cout << "Третий массив (сумма): ";
    for (int x : arr3_sum) std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Третий массив (произведение): ";
    for (int x : arr3_prod) std::cout << x << " ";
    std::cout << std::endl;

    std::cout << "Третий массив (максимум): ";
    for (int x : arr3_max) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
