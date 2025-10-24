#include <iostream>
#include <cmath>

int main() {
    double y;
    std::cin >> y;
    
    
    double total_minutes_double = y / 0.5;
    long long total_minutes = static_cast<long long>(total_minutes_double);
   
    long long hours = total_minutes / 60;
    
    
    long long minutes = total_minutes % 60;
    
    std::cout << hours << " " << minutes << std::endl;
    
    return 0;
}
