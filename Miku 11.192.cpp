

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int a = 8;
    int i = 0;

    while (i < arr.size() && arr[i] < a) {
        std::cout << arr[i] << " ";
        i++;
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int a = 8;
    int i = 0;

    while (i < arr.size() && arr[i] < a) {
        i++;
    }

    // Предыдущий элемент (i-1) и текущий элемент (i)
    if (i > 0 && i < arr.size()) {
        std::cout << "Элементы: " << arr[i-1] << " (индекс " << i-1 << ") и " << arr[i] << " (индекс " << i << ")" << std::endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int a = 8;
    int i = 0;

    while (i < arr.size() && arr[i] < a) {
        i++;
    }

    if (i == 0) {
        std::cout << "Ближайший элемент: " << arr[i] << " (индекс " << i << ")" << std::endl;
    } else if (i == arr.size()) {
        std::cout << "Ближайший элемент: " << arr[i-1] << " (индекс " << i-1 << ")" << std::endl;
    } else {
        int closer_element = (std::abs(a - arr[i-1]) < std::abs(a - arr[i])) ? arr[i-1] : arr[i];
        int closer_index = (std::abs(a - arr[i-1]) < std::abs(a - arr[i])) ? i-1 : i;

        std::cout << "Ближайший элемент: " << closer_element << " (индекс " << closer_index << ")" << std::endl;
    }
    return 0;
}
