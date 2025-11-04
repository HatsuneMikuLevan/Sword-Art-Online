

#include <iostream>
#include <cmath>

int main() {
    long long result = 0;
    long long current_value = pow(20, 2) - pow(19, 2);
    current_value = pow(current_value, 2);

    for (int i = 18; i >= 1; --i) {
        long long temp_value = pow(current_value, 2) - pow(i, 2);
        current_value = temp_value;
    }
    result = pow(current_value, 2);
    std::cout << "Значение выражения: " << result << std::endl;
    return 0;
}
