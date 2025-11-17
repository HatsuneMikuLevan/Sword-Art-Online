

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cout << "Введите количество бегунов (n > 4): ";
    std::cin >> n;

    std::vector<int> results(n);
    std::cout << "Введите " << n << " результатов (в сотых долях секунды): " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> results[i];
    }

    std::sort(results.begin(), results.end());

    int totalTime = 0;
    for (int i = 0; i < 4; ++i) {
        totalTime += results[i];
    }

    std::cout << "Сумма времен четырех лучших бегунов: " << totalTime << " сотых долей секунды" << std::endl;
    std::cout << "Для участия в эстафете выбраны бегуны со временем: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << results[i] << (i == 3 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
