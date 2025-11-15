

#include <iostream>
#include <vector>

int main() {
    const int num_models = 30;
    std::vector<int> power(num_models);
    std::cout << "Введите мощность двигателя (л.с.) для 30 моделей автомобилей: ";
    for (int i = 0; i < num_models; ++i) {
        std::cin >> power[i];
    }

    bool has_powerful_car = false;
    for (int i = 0; i < num_models; ++i) {
        if (power[i] > 200) {
            has_powerful_car = true;
            break;
        }
    }

    if (has_powerful_car) {
        std::cout << "Среди моделей есть автомобиль мощностью более 200 л.с." << std::endl;
    } else {
        std::cout << "Среди моделей нет автомобиля мощностью более 200 л.с." << std::endl;
    }

    return 0;
}
