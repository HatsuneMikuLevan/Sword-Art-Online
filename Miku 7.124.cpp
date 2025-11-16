

#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores = {60, 58, 55, 52, 50, 48, 45, 42, 40, 38, 35, 32, 30, 28, 25, 22, 20, 18, 15, 12};
    int N = 45; // Очки искомой команды
    int place = 1;

    for (int score : scores) {
        if (N < score) {
            place++;
        }
    }

    std::cout << "Место команды, набравшей " << N << " очков: " << place << std::endl;

    return 0;
}
