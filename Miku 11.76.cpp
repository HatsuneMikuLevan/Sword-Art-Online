

#include <iostream>
#include <vector>

int main() {
    std::vector<int> grades = {5, 4, 3, 5, 2, 4, 5, 3, 4, 5}; // Пример оценок
    int countFours = 0;
    int countFives = 0;

    for (int grade : grades) {
        if (grade == 4) {
            countFours++;
        } else if (grade == 5) {
            countFives++;
        }
    }

    std::cout << "Количество четверок: " << countFours << std::endl;
    std::cout << "Количество пятерок: " << countFives << std::endl;

    return 0;
}
