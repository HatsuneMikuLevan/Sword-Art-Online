

#include <iostream>
#include <vector>

int main() {
    // Пример роста 30 учеников
    std::vector<int> height = {165, 172, 180, 160, 175, 171, 168, 173, 176, 170, 
                               178, 164, 182, 170, 174, 177, 169, 181, 175, 172,
                               167, 179, 170, 176, 173, 166, 185, 170, 174, 177};
    int countTallerThan170 = 0;

    for (int h : height) {
        if (h > 170) {
            countTallerThan170++;
        }
    }

    bool canFormTeam = countTallerThan170 >= 5;

    std::cout << "Количество учеников ростом больше 170 см: " << countTallerThan170 << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Можно ли сформировать баскетбольную команду: " << canFormTeam << std::endl;

    return 0;
}
