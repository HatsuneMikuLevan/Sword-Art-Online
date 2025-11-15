

#include <iostream>
#include <vector>

int main() {
    // Пример оценок учеников
    std::vector<int> marks = {5, 4, 3, 5, 2, 5, 4, 5};
    int count_fives = 0;

    for (int mark : marks) {
        if (mark == 5) {
            count_fives++;
        }
    }

    std::cout << "Количество пятерок: " << count_fives << std::endl;

    return 0;
}
