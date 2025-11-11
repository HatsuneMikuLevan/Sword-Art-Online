

#include <iostream>
#include <vector>

int main() {
    std::vector<double> c(15);

    for (int i = 0; i < 15; ++i) {
        c[i] = static_cast<double>(i + 1);
    }

    double result = c[4];
    for (int i = 0; i < 15; ++i) {

        if ((i + 1) % 2 != 0) {
           result -= c[i];
        }
    }
  

    std::cout << "Результат выражения: " << result << std::endl;
    return 0;
}
