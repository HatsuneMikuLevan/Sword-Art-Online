#include <iostream>

int main() {
    int length = 543;
    int width = 130;
    int square_side = 130;
    int num_squares = length / square_side;
    std::cout << "Можно отрезать " << num_squares << " квадратов." << std::endl;
    return 0;
}
