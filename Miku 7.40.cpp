

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> a = {5.5, 12.1, 8.0, 15.2, 10.7, 11.0, 2.3, 10.76, 4.5, 20.0, 1.0, 9.9};
    double sum = 0.0;
    double threshold = 10.75;

    for (double val : a) {
        if (val > threshold) {
            sum += val;
        }
    }

    std::cout << "Сумма чисел больше " << threshold << ": " << sum << std::endl;
    return 0;
}
