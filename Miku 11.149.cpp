

#include <iostream>
#include <vector>
#include <iomanip>

void print_array(const std::vector<double>& arr, const std::string& title) {
    std::cout << title << ": ";
    for (double val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<double> arr = {1.0, 2.0, 3.0, 4.0, 5.0};
    double A = 2.0;

    print_array(arr, "Начальный массив");

    // а) увеличить в 2 раза
    for (double& val : arr) {
        val *= 2;
    }
    print_array(arr, "После увеличения в 2 раза");

    // б) уменьшить на число А
    for (double& val : arr) {
        val -= A;
    }
    print_array(arr, "После уменьшения на A");

    // в) разделить на первый элемент
    if (!arr.empty() && arr[0] != 0) {
        double first_element = arr[0];
        for (double& val : arr) {
            val /= first_element;
        }
    } else {
        std::cout << "Ошибка: массив пуст или первый элемент равен нулю." << std::endl;
    }
    print_array(arr, "После деления на первый элемент");

    return 0;
}
