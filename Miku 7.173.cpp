7.173

#include <iostream>
#include <algorithm>
#include <climits>

int main() {
    const int size = 12;
    int speeds[size];
    std::cout << "Введите 12 скоростей автомобилей: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> speeds[i];
    }

    int maxSpeed = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (speeds[i] > maxSpeed) {
            maxSpeed = speeds[i];
        }
    }

    int secondMaxSpeed = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (speeds[i] > secondMaxSpeed && speeds[i] < maxSpeed) {
            secondMaxSpeed = speeds[i];
        }
    }

    if (secondMaxSpeed == INT_MIN) {
        std::cout << "Невозможно определить вторую максимальную скорость (все скорости одинаковы или их недостаточно)." << std::endl;
    } else {
        std::cout << "Скорость автомобиля, больше которой только максимальное значение: " << secondMaxSpeed << std::endl;
    }

    return 0;
}
