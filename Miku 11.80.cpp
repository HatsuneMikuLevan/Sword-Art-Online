

#include <iostream>
#include <vector>

int main() {
    // Пример оценок 22 учеников
    std::vector<int> grades = {5, 4, 3, 2, 5, 4, 3, 2, 5, 4, 3, 2, 5, 4, 3, 2, 5, 4, 3, 2, 5, 4};
    int countFives = 0;
    int countFours = 0;
    int countThrees = 0;
    int countTwos = 0;

    for (int grade : grades) {
        if (grade == 5) {
            countFives++;
        } else if (grade == 4) {
            countFours++;
        } else if (grade == 3) {
            countThrees++;
        } else if (grade == 2) {
            countTwos++;
        }
    }

    std::cout << "Количество пятерок: " << countFives << std::endl;
    std::cout << "Количество четверок: " << countFours << std::endl;
    std::cout << "Количество троек: " << countThrees << std::endl;
    std::cout << "Количество двоек: " << countTwos << std::endl;

    return 0;
}
