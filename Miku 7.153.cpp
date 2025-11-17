

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

void solve_7_153(const std::vector<int>& numbers) {
    int max_even = INT_MIN;
    bool found_even = false;
    for (int num : numbers) {
        if (num % 2 == 0) {
            if (num > max_even) {
                max_even = num;
            }
            found_even = true;
        }
    }
    if (found_even) {
        std::cout << "Максимальное четное число: " << max_even << std::endl;
    } else {
        std::cout << "Четных чисел среди заданных нет." << std::endl;
    }
}
