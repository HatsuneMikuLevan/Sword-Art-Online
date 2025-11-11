

#include <iostream>
#include <vector>

int main() {
    std::vector<int> d = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int val : d) {
        if (val % 2 == 0) {
            sum += val;
        }
    }

    std::cout << "Сумма четных чисел: " << sum << std::endl;
    return 0;
}
