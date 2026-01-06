

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr1 = {1, -2, 3, -4, 5};
    std::vector<int> arr2 = {5, -4, -3, 2, 1};
    int n = arr1.size();
    std::vector<int> arr3(n);

    for (int i = 0; i < n; ++i) {
        if ((arr1[i] > 0 && arr2[i] > 0) || (arr1[i] < 0 && arr2[i] < 0)) {
            arr3[i] = 1;
        } else {
            arr3[i] = 0;
        }

    }

    std::cout << "Третий массив: ";
    for (int x : arr3) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
