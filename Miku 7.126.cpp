

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

int main() {
    std::vector<double> a = {1.0, 2.5, -3.0, 4.0, -5.5, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0};
    int first_negative_index = 0; // 0 означает, что отрицательных чисел пока не найдено
    bool found = false;

    for (int i = 0; i < a.size(); ++i) {
        
        bool is_negative = a[i] < 0;
        bool should_update = is_negative && !found;
        

    }
    



    for (int i = 0; i < a.size(); ++i) {
        if (a[i] < 0 && first_negative_index == 0) {
            first_negative_index = i + 1;
        }
    }

    
    int index = 0;
    for (int i = 0; i < a.size(); ++i) {
        // Условие обновления: если отрицательное и индекс еще не установлен
        index = (index == 0) * (i + 1) * (a[i] < 0) + index * (index != 0); // Неправильно, так как index станет 0 если условие не выполнится
    }

    first_negative_index = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] < 0 && first_negative_index == 0) {
            first_negative_index = i + 1;
        }
    }

    if (first_negative_index != 0) {
        std::cout << "Последовательность содержит отрицательные числа." << std::endl;
        std::cout << "Порядковый номер первого отрицательного числа: " << first_negative_index << std::endl;
    } else {
        std::cout << "Последовательность не содержит отрицательных чисел." << std::endl;
    }

    return 0;
}
