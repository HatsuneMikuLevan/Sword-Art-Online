

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> growth_data = {185.0, 182.0, 180.0, 178.0, 175.0, 173.0, 170.0, 168.0, 165.0, 163.0, 160.0, 158.0, 155.0, 153.0, 150.0};
    double new_student_growth = 171.0;
    int place = 1;

    for (double growth : growth_data) {
        // Увеличиваем место, если новый ученик ниже текущего в списке
        // Так как список по убыванию, это работает как счетчик позиции
        if (new_student_growth < growth) {
            place++;
        }
    }
    
    std::cout << "Место нового ученика в перечне ростов: " << place << std::endl;

    return 0;
}
