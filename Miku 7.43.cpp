

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 15, 20, 25, 30, 3, 40, 5, 50, 6};
    int sum = 0;

    for (int val : numbers) {
        if (val % 10 == 0) {
            sum += val;
        }
    }

    std::cout << "Сумма чисел, оканчивающихся нулем: " << sum << std::endl;
    return 0;
}
