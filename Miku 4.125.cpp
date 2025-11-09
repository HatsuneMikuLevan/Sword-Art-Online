
#include <iostream>
#include <string>

int main() {
    double weight;
    std::cout << "Введите вес боксера: ";
    std::cin >> weight;

    std::string category = (weight <= 60.0) ? "легкий вес" : ((weight <= 64.0) ? "первый полусредний вес" : "полусредний вес");
    std::cout << "Боксер выступает в категории: " << category << std::endl;

    return 0;
}
