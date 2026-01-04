

#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores = {50, 48, 45, 42, 40, 38, 35, 33, 30, 28, 25, 22, 20, 18, 15, 12, 10, 8, 5, 2};
    int n = 25;
    int place = 1;
    int i = 0;

    while (i < scores.size() && scores[i] != n) {
        place++;
        i++;
    }
    std::cout << "Команда заняла место: " << place << std::endl;
    return 0;
}
