

#include <iostream>
#include <vector>
#include <numeric>

int main() {

    std::vector<int> precipitations = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < precipitations.size(); ++i) {
        // Дни считаются с 1, поэтому i+1
        if ((i + 1) % 2 == 0) {
            even_sum += precipitations[i];
        } else {
            odd_sum += precipitations[i];
        }
    }

    if (even_sum > odd_sum) {
        std::cout << "По четным числам выпало больше осадков." << std::endl;
    } else if (odd_sum > even_sum) {
        std::cout << "По нечетным числам выпало больше осадков." << std::endl;
    } else {
        std::cout << "Количество осадков по четным и нечетным числам одинаково." << std::endl;
    }

    return 0;
}
