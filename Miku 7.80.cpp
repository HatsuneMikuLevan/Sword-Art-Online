

#include <iostream>
#include <iomanip>

int main() {

    int matches[20][2];

    std::cout << "Введите результаты 20 игр (забито пропущено):" << std::endl;
    for (int i = 0; i < 20; ++i) {
        std::cout << "Игра " << i + 1 << ": ";
        std::cin >> matches[i][0] >> matches[i][1];
    }

    // а) Для каждой игры напечатать результат
    std::cout << "\nа) Результаты игр:" << std::endl;
    for (int i = 0; i < 20; ++i) {
        int scored = matches[i][0];
        int conceded = matches[i][1];
        std::cout << "Игра " << i + 1 << ": ";
        if (scored > conceded) {
            std::cout << "выигрыш";
        } else if (scored < conceded) {
            std::cout << "проигрыш";
        } else {
            std::cout << "ничья";
        }
        std::cout << std::endl;
    }

    // б) Определить количество выигрышей
    int wins_b = 0;
    for (int i = 0; i < 20; ++i) {
        if (matches[i][0] > matches[i][1]) {
            wins_b++;
        }
    }
    std::cout << "\nб) Количество выигрышей: " << wins_b << std::endl;

    // в) Определить количество выигрышей и проигрышей
    int wins_v = 0;
    int losses_v = 0;
    for (int i = 0; i < 20; ++i) {
        if (matches[i][0] > matches[i][1]) {
            wins_v++;
        } else if (matches[i][0] < matches[i][1]) {
            losses_v++;
        }
    }
    std::cout << "\nв) Количество выигрышей: " << wins_v << ", количество проигрышей: " << losses_v << std::endl;

    // г) Определить количество выигрышей, ничьих и проигрышей
    int wins_g = 0;
    int draws_g = 0;
    int losses_g = 0;
    for (int i = 0; i < 20; ++i) {
        if (matches[i][0] > matches[i][1]) {
            wins_g++;
        } else if (matches[i][0] < matches[i][1]) {
            losses_g++;
        } else {
            draws_g++;
        }
    }
    std::cout << "\nг) Количество выигрышей: " << wins_g << ", количество ничьих: " << draws_g << ", количество проигрышей: " << losses_g << std::endl;

    // д) Определить, во скольких играх разность мячей >= 3
    int diff_ge_3 = 0;
    for (int i = 0; i < 20; ++i) {
        if (std::abs(matches[i][0] - matches[i][1]) >= 3) {
            diff_ge_3++;
        }
    }
    std::cout << "\nд) Количество игр с разницей мячей >= 3: " << diff_ge_3 << std::endl;

    // е) Определить общее число очков
    int total_points = 0;
    for (int i = 0; i < 20; ++i) {
        if (matches[i][0] > matches[i][1]) {
            total_points += 3;
        } else if (matches[i][0] == matches[i][1]) {
            total_points += 1;
        }
    }
    std::cout << "\nе) Общее число очков команды: " << total_points << std::endl;

    return 0;
}
