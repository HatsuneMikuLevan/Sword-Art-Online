

#include <iostream>

int main() {
    int sum1 = 0;
    int sum2 = 0;
    std::cout << "Введите баллы двух спортсменов-пятиборцев по пяти видам спорта:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        int score1, score2;
        std::cout << "Вид спорта " << i + 1 << " - Спортсмен 1: ";
        std::cin >> score1;
        std::cout << "Вид спорта " << i + 1 << " - Спортсмен 2: ";
        std::cin >> score2;
        sum1 += score1;
        sum2 += score2;
    }
    std::cout << "Сумма баллов первого спортсмена: " << sum1 << std::endl;
    std::cout << "Сумма баллов второго спортсмена: " << sum2 << std::endl;
    return 0;
}
