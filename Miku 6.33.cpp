
#include <iostream>

int main() {
    double area = 100.0;
    double yield = 20.0;
    double total_harvest = 0.0;
    int year_a = 0;
    int year_b = 0;
    int year_c = 0;
    bool found_a = false;
    bool found_b = false;
    
    for (int year = 1; ; ++year) {
        if (year > 1) {
            area *= 1.05;
            yield *= 1.02;
        }
        
        double current_harvest = area * yield;
        total_harvest += current_harvest;
        
        if (!found_a && yield > 22.0) {
            year_a = year;
            found_a = true;
        }
        
        if (!found_b && area > 120.0) {
            year_b = year;
            found_b = true;
        }
        
        if (total_harvest > 800.0) {
            year_c = year;
            break;
        }
    }
    
    std::cout << "а) Урожайность превысит 22 ц/га в " << year_a << " году." << std::endl;
    std::cout << "б) Площадь участка станет больше 120 га в " << year_b << " году." << std::endl;
    std::cout << "в) Общий урожай превысит 800 ц в " << year_c << " году." << std::endl;
    
    return 0;
}
