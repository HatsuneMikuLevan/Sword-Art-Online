

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a: ";
    std::cin >> a;

    int n = 1;
    double current_val = 1.0 / n; // Assuming the sequence starts from 1/1, 1/2, ... based on the image fragment. The image is ambiguous. Assuming the sequence is 1/i.
    while (current_val < a) {
        std::cout << current_val << std::endl;
        n++;
        current_val = 1.0 / n;
    }

    return 0;
}
