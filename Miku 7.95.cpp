

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите количество ненулевых целых чисел в последовательности (n >= 2): ";
    std::cin >> n;

    std::vector<int> seq(n);
    std::cout << "Введите " << n << " ненулевых чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> seq[i];
    }

    int sign_changes_count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if ((seq[i] > 0 && seq[i + 1] < 0) || (seq[i] < 0 && seq[i + 1] > 0)) {
            sign_changes_count++;
        }
    }

    std::cout << "Количество смен знака в последовательности: " << sign_changes_count << std::endl;

    return 0;
}
