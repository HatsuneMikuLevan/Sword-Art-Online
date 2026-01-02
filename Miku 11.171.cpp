

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Функция для вставки числа val в массив перед элементами, кратными а
void insertBeforeMultiples(vector<int>& arr, int val, int a) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % a == 0) {
            arr.insert(arr.begin() + i, val);
            i++; // Пропускаем вставленный элемент, чтобы не проверять его сразу
        }
    }
}

// Функция для вставки числа val в массив после всех отрицательных элементов
void insertAfterNegatives(vector<int>& arr, int val) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            arr.insert(arr.begin() + i + 1, val);
            i++; // Пропускаем вставленный элемент
        }
    }
}

{
    vector<int> arr1 = {10, -5, 20, 3, 40};
    int n1 = 99;
    int a1 = 10;
    cout << "Исходный массив (а): ";
    for (int x : arr1) cout << x << " ";
    insertBeforeMultiples(arr1, n1, a1);
    cout << "\nМассив после вставки " << n1 << " перед кратными " << a1 << ": ";
    for (int x : arr1) cout << x << " ";
    cout << endl;

    vector<int> arr2 = {1, -2, 3, -4, 5};
    int n2 = 88;
    cout << "Исходный массив (б): ";
    for (int x : arr2) cout << x << " ";
    insertAfterNegatives(arr2, n2);
    cout << "\nМассив после вставки " << n2 << " после отрицательных элементов: ";
    for (int x : arr2) cout << x << " ";
    cout << endl;
}
