

#include <iostream>
#include <vector>
#include <iomanip>

void print_array_150(const std::vector<double>& arr, const std::string& title) {
    std::cout << title << ": ";
    for (double val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<double> arr = {100.0, 200.0, 300.0, 400.0};
    double B = 50.0;

    print_array_150(arr, "Начальный массив");

    // а) уменьшить на 20
    for (double& val : arr) {
        val -= 20;
    }
    print_array_150(arr, "После уменьшения на 20");

    // б) умножить на последний элемент
    if (!arr.empty()) {
        double last_element = arr.back();
        for (double& val : arr) {
            val *= last_element;
        }
    } else {
        std::cout << "Ошибка: массив пуст." << std::endl;
    }
    print_array_150(arr, "После умножения на последний элемент");

    // в) увеличить на число В
    for (double& val : arr) {
        val += B;
    }
    print_array_150(arr, "После увеличения на B");

    return 0;
}
