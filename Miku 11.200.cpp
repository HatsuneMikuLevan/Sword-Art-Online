

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> scores = {5, 4, 3, 5, 2, 4, 5, 3, 4, 5, 3, 4, 5, 3, 4, 5, 3, 4, 5, 3, 4, 5, 3, 4, 5, 3, 4, 5}; // 28 оценок
    bool has_twos = false;
    for (int score : scores) {
        if (score == 2) {
            has_twos = true;
            break;
        }
    }
    std::cout << "Есть ли среди оценок двойки? ";
    if (has_twos) {
        std::cout << "Да" << std::endl;
    } else {
        std::cout << "Нет" << std::endl;
    }

    return 0;
}
