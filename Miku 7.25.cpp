

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int count = 10;
    std::vector<double> a(count);

    std::cout << "Введите 10 чисел: ";
    for (int i = 0; i < count; ++i) {
        std::cin >> a[i];
    }

    double sum = std::accumulate(a.begin(), a.end(), 0.0);
    double average = sum / count;

    std::cout << "Среднее арифметическое: " << average << std::endl;

    return 0;
}
