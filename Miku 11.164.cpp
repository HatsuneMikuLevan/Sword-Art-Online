

#include <iostream>
#include <vector>
#include <numeric>

void removeEvenOddPos(std::vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); ++i) {

        if (!((arr[i] % 2 == 0) && ((i + 1) % 2 != 0))) {
            arr[j++] = arr[i];
        }
    }
    // Заполнение оставшихся элементов нулями
    for (int i = j; i < arr.size(); ++i) {
        arr[i] = 0;
    }
    // Изменение размера массива до j
    arr.resize(j);
}


#include <vector>
#include <numeric>

void removeMultiplesOf3Or5(std::vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); ++i) {
        // Условие сохранения: элемент не делится ни на 3, ни на 5
        if (!(arr[i] % 3 == 0 || arr[i] % 5 == 0)) {
            arr[j++] = arr[i];
        }
    }
    // Заполнение оставшихся элементов нулями
    for (int i = j; i < arr.size(); ++i) {
        arr[i] = 0;
    }
    // Изменение размера массива до j
    arr.resize(j);
}

