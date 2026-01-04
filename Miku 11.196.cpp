

#include <iostream>
#include <vector>

int main() {
    std::vector<int> grades = {5, 5, 5, 5, 5, 5, 4, 4, 3, 5, 4, 3, 2, 5, 4, 3, 4, 5, 3, 2, 4, 5, 3, 4};
 
    int fives_count = 0;
    int i = 0;

    while (i < grades.size() && grades[i] == 5) {
        fives_count++;
        i++;
    }
    std::cout << "Количество учеников с оценкой '5': " << fives_count << std::endl;
    return 0;
}
