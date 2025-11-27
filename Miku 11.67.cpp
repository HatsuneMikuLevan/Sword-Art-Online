

#include <iostream>
#include <vector>
#include <numeric>

void find_busier_side(const std::vector<int>& residents) {
    int odd_side_sum = 0;
    int even_side_sum = 0;
    for (size_t i = 0; i < residents.size(); ++i) {
 
        if ((i + 1) % 2 != 0) {
            odd_side_sum += residents[i];
        } else {
            even_side_sum += residents[i];
        }
    }

    if (odd_side_sum > even_side_sum) {
        std::cout << "Больше жителей проживает на стороне с нечетными номерами домов." << std::endl;
    } else if (even_side_sum > odd_side_sum) {
        std::cout << "Больше жителей проживает на стороне с четными номерами домов." << std::endl;
    } else {
        std::cout << "Количество жителей на обеих сторонах одинаково." << std::endl;
    }
}

int main() {
    std::vector<int> residents = {10, 15, 12, 8, 20, 25}; 
    find_busier_side(residents);
    return 0;
}
