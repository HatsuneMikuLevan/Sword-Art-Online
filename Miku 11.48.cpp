11.48

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
 
    std::vector<double> junePrecip = {
        1.2, 0.5, 3.1, 2.0, 0.0, 1.5, 0.8, 4.2, 1.1, 0.5, 
        2.1, 0.0, 0.0, 1.5, 2.2, 1.8, 0.5, 3.1, 2.5, 1.2, 
        0.0, 0.0, 0.5, 1.1, 2.3, 1.8, 0.5, 0.0, 1.2, 2.0  
    }; 

    double decade1 = std::accumulate(junePrecip.begin(), junePrecip.begin() + 10, 0.0);
    double decade2 = std::accumulate(junePrecip.begin() + 10, junePrecip.begin() + 20, 0.0);
    double decade3 = std::accumulate(junePrecip.begin() + 20, junePrecip.begin() + 30, 0.0);

    std::cout << "Осадки за 1-ю декаду: " << decade1 << std::endl;
    std::cout << "Осадки за 2-ю декаду: " << decade2 << std::endl;
    std::cout << "Осадки за 3-ю декаду: " << decade3 << std::endl;

    return 0;
}
