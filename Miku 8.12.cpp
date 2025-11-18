

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a: ";
    std::cin >> a;

    double sum = 0.0;
    int n = 0;
    while (true) {
        n++;
        sum += 1.0 / n;
        if (sum > a) {
            std::cout << "Значение n: " << n << ", Сумма: " << sum << std::endl;
            // Depending on interpretation, either stop or continue printing. Assuming continue.
            // If the user wants to continue indefinitely, this will run forever.
            // Assuming a practical limit for a single run.
            if (n >= 10000) break; // Practical limit
        }
    }

    return 0;
}
