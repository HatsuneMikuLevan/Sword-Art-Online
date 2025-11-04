

#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Дюймы\tСантиметры" << std::endl;
    for (int i = 10; i <= 22; ++i) {
        double cm = i * 2.54;
        std::cout << i << "\t" << std::fixed << std::setprecision(2) << cm << std::endl;
    }
    return 0;
}
