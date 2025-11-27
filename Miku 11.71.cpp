

#include <iostream>
#include <vector>
#include <numeric>

int count_failing_students(const std::vector<int>& grades) {
    int count = 0;
    for (int grade : grades) {
        // Assuming failing grades are 1 and 2
        if (grade <= 2) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> grades = {5, 4, 3, 2, 5, 4, 3, 1, 5, 4, 3, 2, 5, 4, 3, 1, 5, 4, 3, 2, 5, 4, 3, 5, 4};
    std::cout << "Количество неуспевающих учеников: " << count_failing_students(grades) << std::endl;
    return 0;
}
