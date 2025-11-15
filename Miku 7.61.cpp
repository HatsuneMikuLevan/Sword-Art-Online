
#include <iostream>
#include <vector>

int main() {
    // Пример роста 12 юношей
    std::vector<int> heights = {170, 160, 180, 165, 155, 175, 162, 168, 171, 159, 177, 163};
    int count_less_than_165 = 0;

    for (int height : heights) {
        if (height < 165) {
            count_less_than_165++;
        }
    }

    std::cout << "Количество юношей ростом менее 165 см: " << count_less_than_165 << std::endl;

    return 0;
}
