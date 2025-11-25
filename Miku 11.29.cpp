

#include <iostream>
#include <vector>

void solve_11_29(const std::vector<double>& precipitations) {
    std::cout << "Числа месяца, когда осадков не было: ";
    for (int i = 0; i < precipitations.size(); ++i) {
        if (precipitations[i] == 0.0) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;
}

