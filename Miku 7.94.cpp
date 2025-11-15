

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите количество элементов в последовательности (n >= 3): ";
    std::cin >> n;

    std::vector<int> seq(n);
    std::cout << "Введите " << n << " чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> seq[i];
    }

    int local_max_count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (seq[i] > seq[i - 1] && seq[i] > seq[i + 1]) {
            local_max_count++;
        }
    }

    std::cout << "Количество строгих локальных максимумов: " << local_max_count << std::endl;

    return 0;
}
