

#include <iostream>

int main() {
    double deposit = 1000.0;
    double monthly_increase;
    int months_a = 0;
    int months_b = 0;
    bool found_a = false;
    
    std::cout << "Месяц | Сумма вклада | Увеличение" << std::endl;
    for (int month = 1; ; ++month) {
        monthly_increase = deposit * 0.02;
        deposit += monthly_increase;
        
        std::cout << month << " | " << deposit << " | " << monthly_increase << std::endl;
        
        if (!found_a && monthly_increase > 30.0) {
            months_a = month;
            found_a = true;
        }
        
        if (deposit > 1200.0) {
            months_b = month;
            break;
        }
    }
    
    std::cout << "\nа) Величина ежемесячного увеличения вклада превысит 30 руб. в " << months_a << " месяц." << std::endl;
    std::cout << "б) Размер вклада превысит 1200 руб. через " << months_b << " месяцев." << std::endl;
    
    return 0;
}
