
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double result = 0.0;
    for (int i = 50; i >= 1; --i) {
        result = sqrt(i + result);
    }
    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Значение выражения равно: " << result << std::endl;
    return 0;
}
