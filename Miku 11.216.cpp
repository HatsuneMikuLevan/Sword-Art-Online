

#include <iostream>
#include <vector>

void solve_11_216(const std::vector<int>& scores) {
    size_t count = 0;
    size_t i = 0;

    while (i < scores.size() && scores[i] == 5) {
        count++;
        i++;
    }

    std::cout << "Количество учеников с оценкой '5': " << count << std::endl;
}
