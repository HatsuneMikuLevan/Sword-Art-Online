

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> c = {10.5, 25.0, 15.2, 30.1, 5.0, 22.0, 18.5, 40.0, 12.3, 2.1, 50.0, 1.0, 3.0, 4.0, 5.0, 6.0};
    double sum = 0;
    int count = 0;
    for (double val : c) {
        if (val > 20) {
            sum += val;
            count++;
        }
    }
    // По условию задачи, числа больше 20 имеются, так что деление безопасно.
    double average = sum / count;
    std::cout << "Среднее арифметическое чисел больше 20: " << average << std::endl;
    return 0;
}
