

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int side1 = rand() % 7;
    int side2 = rand() % 7;


    if (side1 > side2) {
        std::swap(side1, side2);
    }
    

    std::cout << "Выбрана кость " << side1 << "-" << side2 << std::endl;

    return 0;
}
