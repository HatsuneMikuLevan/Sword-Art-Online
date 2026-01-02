

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void print_array_152(const std::vector<int>& arr, const std::string& title) {
    std::cout << title << ": ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    if (arr.size() % 2 != 0) {
        std::cout << "Массив должен содержать четное число элементов." << std::endl;
        return 1;
    }
    int n = arr.size();
    int half_n = n / 2;

    print_array_152(arr, "Начальный массив");

    // а) его половины
    std::rotate(arr.begin(), arr.begin() + half_n, arr.end());
    print_array_152(arr, "После обмена половин");

    // б) первый элемент со вторым, третий с четвертым и т. д.
    // Сброс массива для следующего подпункта
    arr = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < n; i += 2) {
        std::swap(arr[i], arr[i + 1]);
    }
    print_array_152(arr, "После попарного обмена");

    // в) его половины следующим способом: первый элемент поменять с последним, второй с предпоследним и т. д.
    // Сброс массива для следующего подпункта
    arr = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < half_n; ++i) {
        std::swap(arr[i], arr[n - 1 - i]);
    }
    print_array_152(arr, "После обмена 1-го с последним и т.д.");

    return 0;
}
