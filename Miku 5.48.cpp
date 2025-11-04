

#include <iostream>
#include <cmath>

int main() {
    std::cout << "Количество клеток амебы:" << std::endl;
    for (int hours = 3; hours <= 24; hours += 3) {
        int divisions = hours / 3;
        long long cells = std::pow(2, divisions);
        std::cout << "Через " << hours << " часа(ов): " << cells << " клеток." << std::endl;
    }
    return 0;
}
