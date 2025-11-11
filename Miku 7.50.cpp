7.50

#include <iostream>

int main() {

    int children_per_class[11] = {25, 28, 24, 30, 26, 29, 27, 31, 25, 28, 26};
    
    int total_children_odd_classes = 0;
    

    for (int i = 0; i < 11; ++i) {

        if ((i + 1) % 2 != 0) {
            total_children_odd_classes += children_per_class[i];
        }
    }
    
    std::cout << "Общее число детей в 1, 3, 5, 7, 9 и 11 классах: " << total_children_odd_classes << std::endl;
    
    return 0;
}
