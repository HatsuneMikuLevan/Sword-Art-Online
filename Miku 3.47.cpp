#include <iostream>
#include <iomanip>

int main() {
    int h, m, s;
    std::cin >> h >> m >> s;
    
    
    int h12 = h % 12;
    
   
    double angle = h12 * 30.0 + m * 0.5 + s * (1.0 / 120.0);
    
    std::cout << std::fixed << std::setprecision(10) << angle << std::endl;
    
    return 0;
}
