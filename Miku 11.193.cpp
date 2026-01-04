

#include <iostream>
#include <vector>

int main() {
    std::vector<int> growth = {185, 182, 180, 178, 175, 173, 170, 168, 165, 163, 160, 158, 155, 153, 150};
    int new_growth = 174;
    int place = 1;
    int i = 0;

    while (i < growth.size() && growth[i] > new_growth) {
        place++;
        i++;
    }
    std::cout << "Новый ученик займет место: " << place << std::endl;
    return 0;
}
