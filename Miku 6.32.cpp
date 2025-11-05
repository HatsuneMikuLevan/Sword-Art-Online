

#include <iostream>

int main() {
    double daily_run = 10.0;
    double total_run = 10.0;
    int day_a = 0;
    int day_b = 0;
    bool found_a = false;
    
    std::cout << "День | Дневной пробег | Суммарный пробег" << std::endl;
    std::cout << "1 | " << daily_run << " | " << total_run << std::endl;
    
    for (int day = 2; ; ++day) {
        daily_run *= 1.1;
        total_run += daily_run;
        
        std::cout << day << " | " << daily_run << " | " << total_run << std::endl;
        
        if (!found_a && daily_run > 20.0) {
            day_a = day;
            found_a = true;
        }
        
        if (total_run > 100.0) {
            day_b = day;
            break;
        }
    }
    
    std::cout << "\nа) Лыжник пробежит больше 20 км в " << day_a << " день." << std::endl;
    std::cout << "б) Суммарный пробег превысит 100 км в " << day_b << " день." << std::endl;
    
    return 0;
}
