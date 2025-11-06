

#include <iostream>

void solve6_73() {
    int m, g, z;
    std::cout << "Введите число m, первый член g и знаменатель z: ";
    std::cin >> m >> g >> z;

    if (g == 0) {
        if (m == 0) {
            std::cout << "Число является членом геометрической прогрессии." << std::endl;
        } else {
            std::cout << "Число не является членом геометрической прогрессии." << std::endl;
        }
        return;
    }

    if (m % g != 0) {
        std::cout << "Число не является членом геометрической прогрессии." << std::endl;
        return;
    }

    int current = m / g;
    if (z == 1) {
        if (current == 1) {
            std::cout << "Число является членом геометрической прогрессии." << std::endl;
        } else {
            std::cout << "Число не является членом геометрической прогрессии." << std::endl;
        }
        return;
    }
    if (z == -1) {
        if (current == 1 || current == -1) {
            std::cout << "Число является членом геометрической прогрессии." << std::endl;
        } else {
            std::cout << "Число не является членом геометрической прогрессии." << std::endl;
        }
        return;
    }

    if (z == 0) {
        if (m == g || m == 0) {
            std::cout << "Число является членом геометрической прогрессии." << std::endl;
        } else {
            std::cout << "Число не является членом геометрической прогрессии." << std::endl;
        }
        return;
    }

    while (current % z == 0) {
        current /= z;
    }

    if (current == 1) {
        std::cout << "Число является членом геометрической прогрессии." << std::endl;
    } else {
        std::cout << "Число не является членом геометрической прогрессии." << std::endl;
    }
}
