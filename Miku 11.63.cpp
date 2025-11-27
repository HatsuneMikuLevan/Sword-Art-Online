11.63

#include <iostream>
#include <vector>

int main() {
    // Пример данных за 12 месяцев (январь, февраль, март...)
    std::vector<double> precipitations_year = {
        10.0, 15.0, 25.0, 20.0, 30.0, 45.0, 
        50.0, 40.0, 35.0, 25.0, 15.0, 10.0
    }; 

    double total_target_months = 0.0;

    total_target_months += precipitations_year[2];
    total_target_months += precipitations_year[5];
    total_target_months += precipitations_year[8];
    total_target_months += precipitations_year[11];

    std::cout << "Общее число осадков в марте, июне, сентябре и декабре: " << total_target_months << std::endl;

    return 0;
}
