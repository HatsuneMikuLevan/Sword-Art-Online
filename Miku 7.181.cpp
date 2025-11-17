7.181

#include <iostream>
#include <vector>

int main() {
    const int N = 20;
    int dominoes;
    // Ввод данных
    for (int i = 0; i < N; ++i) {
        std::cin >> dominoes[i];
    }

    bool is_valid = true;
    int prev_right = -1;
    int i = 0;

    while (i < N) {
        int left = dominoes[i] / 10;
        int right = dominoes[i] % 10;

        if (i > 0) {
            if (prev_right != left) {
                is_valid = false;
                break; // Прерываем цикл при нарушении правила
            }
        }
        prev_right = right;
        i++;
    }

    std::cout << "Последовательность " << (is_valid ? "соответствует" : "не соответствует") << " правилам домино (случай а)." << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    const int N = 20;
    int dominoes;
    // Ввод данных
    for (int i = 0; i < N; ++i) {
        std::cin >> dominoes[i];
    }

    bool is_valid = true;
    int prev_right = -1;
    int i = 0;

    while (i < N) {
        int left = dominoes[i] / 10;
        int right = dominoes[i] % 10;

        if (i > 0) {
         
            if (prev_right != left && prev_right != right) {
                is_valid = false;
                break;
            }
        }
        

        if (prev_right == left) {
            prev_right = right;
        } else if (prev_right == right) {
            prev_right = left;
        }


        i++;
    }

    std::cout << "Последовательность " << (is_valid ? "соответствует" : "не соответствует") << " правилам домино (случай б)." << std::endl;

    return 0;
}
