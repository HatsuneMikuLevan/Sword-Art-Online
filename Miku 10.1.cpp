

#include <iostream>
#include <random>
#include <iomanip>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    // Диапазон (0, 1)
    std::uniform_real_distribution<> dis(0.0, 1.0); 

    std::cout << "8 случайных вещественных чисел n(0, 1):\n";
    for (int i = 0; i < 8; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis(gen) << "\n";
    }
    return 0;
}

#include <iostream>
#include <random>
#include <iomanip>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1.0); 

    int k;
    std::cout << "Введите значение k: ";
    std::cin >> k;

    std::cout << k << " случайных вещественных чисел n(0, 1):\n";
    for (int i = 0; i < k; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis(gen) << "\n";
    }
    return 0;
}
#include <iostream>
#include <random>
#include <iomanip>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    // Диапазон (25, 26)
    std::uniform_real_distribution<> dis(25.0, 26.0); 

    std::cout << "15 случайных вещественных чисел n(25, 26):\n";
    for (int i = 0; i < 15; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis(gen) << "\n";
    }
    return 0;
}
#include <iostream>
#include <random>
#include <iomanip>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    // Диапазон (0, 15)
    std::uniform_real_distribution<> dis(0.0, 15.0); 

    std::cout << "20 случайных вещественных чисел n(0, 15):\n";
    for (int i = 0; i < 20; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis(gen) << "\n";
    }
    return 0;
}
#include <iostream>
#include <random>
#include <iomanip>
#include <vector>
#include <algorithm>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    
    int a;
    double b;
    std::cout << "Введите значение a (натуральное число): ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;

    // k - натуральное, не превосходящее a. Диапазон [1, a]
    std::uniform_int_distribution<> dis_k(1, a);
    int k = dis_k(gen);

    std::uniform_real_distribution<> dis_n(0.0, b);

    std::cout << "Случайное k: " << k << "\n";
    std::cout << k << " случайных вещественных чисел n(0, " << b << "):\n";
    for (int i = 0; i < k; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis_n(gen) << "\n";
    }
    return 0;
}
#include <iostream>
#include <random>
#include <iomanip>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    // Диапазон (-40, 40)
    std::uniform_real_distribution<> dis(-40.0, 40.0); 

    std::cout << "10 случайных вещественных чисел n(-40, 40):\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis(gen) << "\n";
    }
    return 0;
}
#include <iostream>
#include <random>
#include <iomanip>
#include <vector>
#include <algorithm>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    
    int m;
    double a, b;
    std::cout << "Введите значение m (натуральное число): ";
    std::cin >> m;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;

    // k - натуральное, не превосходящее m. Диапазон [1, m]
    std::uniform_int_distribution<> dis_k(1, m);
    int k = dis_k(gen);

    std::uniform_real_distribution<> dis_n(a, b);

    std::cout << "Случайное k: " << k << "\n";
    std::cout << k << " случайных вещественных чисел n(" << a << ", " << b << "):\n";
    for (int i = 0; i < k; ++i) {
        std::cout << std::fixed << std::setprecision(5) << dis_n(gen) << "\n";
    }
    return 0;
}
