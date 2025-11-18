

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double p_prev2 = 1.0;
    double q_prev2 = 1.0;
    double p_prev1 = 2.0;
    double q_prev1 = 1.0;
    double current_val;
    double prev_val = p_prev1 / q_prev1;
    double p_curr, q_curr;

    while (true) {
        p_curr = p_prev1 + p_prev2;
        q_curr = q_prev1 + q_prev2;
        current_val = p_curr / q_curr;

        if (std::abs(current_val - prev_val) <= 0.001) {
            break;
        }

        p_prev2 = p_prev1;
        q_prev2 = q_prev1;
        p_prev1 = p_curr;
        q_prev1 = q_curr;
        prev_val = current_val;
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Первый член, удовлетворяющий условию: " << current_val << std::endl;

    return 0;
}
