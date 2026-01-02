

#include <iostream>

void removeElementByIndex(int arr[], int& size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = 0;
    }
}

void removeNegativeElements(int arr[], int& size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            removeElementByIndex(arr, size, i);
            --i; // Проверяем новый элемент на текущей позиции
        }
    }
}

void removeElementsGreaterThanN(int arr[], int& size, int n) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] > n) {
            removeElementByIndex(arr, size, i);
            --i;
        }
    }
}

void removeElementsInRange(int arr[], int& size, int n1, int n2) {
    if (n1 > n2) return;
    for (int i = 0; i <= n2 - n1; ++i) {
        removeElementByIndex(arr, size, n1 - 1);
    }
}

int main() {
    // Пример для а)
    int arr_a[] = {1, -2, 3, -4, 5, -6, 7, 0, 0, 0};
    int size_a = 10;
    removeNegativeElements(arr_a, size_a);
    std::cout << "Массив после удаления отрицательных элементов:" << std::endl;
    for (int i = 0; i < size_a; ++i) {
        std::cout << arr_a[i] << " ";
    }
    std::cout << std::endl;

    // Пример для б)
    int arr_b[] = {10, 20, 30, 40, 50, 0, 0, 0, 0, 0};
    int size_b = 10;
    int n = 25;
    removeElementsGreaterThanN(arr_b, size_b, n);
    std::cout << "Массив после удаления элементов > " << n << ":" << std::endl;
    for (int i = 0; i < size_b; ++i) {
        std::cout << arr_b[i] << " ";
    }
    std::cout << std::endl;

    // Пример для в)
    int arr_v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size_v = 10;
    int n1 = 3;
    int n2 = 6;
    removeElementsInRange(arr_v, size_v, n1, n2);
    std::cout << "Массив после удаления элементов с " << n1 << " по " << n2 << ":" << std::endl;
    for (int i = 0; i < size_v; ++i) {
        std::cout << arr_v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
