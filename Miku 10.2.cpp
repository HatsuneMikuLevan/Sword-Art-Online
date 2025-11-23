

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    std::cout << "10 случайных чисел от 0 до 10:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        int random_num = rand() % 11;
        std::cout << random_num << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int k, a;
    std::cout << "Введите k (количество чисел) и a (верхний предел):" << std::endl;
    std::cin >> k >> a;
    std::cout << k << " случайных чисел от 0 до " << a << ":" << std::endl;
    for (int i = 0; i < k; ++i) {
        int random_num = rand() % (a + 1);
        std::cout << random_num << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int min_val = 10;
    int max_val = 20;
    std::cout << "20 случайных чисел от 10 до 20:" << std::endl;
    for (int i = 0; i < 20; ++i) {
        int random_num = rand() % (max_val - min_val + 1) + min_val;
        std::cout << random_num << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int k, a;
    int min_val = -10;
    std::cout << "Введите k (количество чисел) и a (верхний предел):" << std::endl;
    std::cin >> k >> a;
    std::cout << k << " случайных чисел от " << min_val << " до " << a << ":" << std::endl;
    for (int i = 0; i < k; ++i) {
        int random_num = rand() % (a - min_val + 1) + min_val;
        std::cout << random_num << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    srand(time(0));
    int a, b;
    std::cout << "Введите a (нижний предел) и b (верхний предел):" << std::endl;
    std::cin >> a >> b;

    int min_val = std::min(a, b);
    int max_val = std::max(a, b);

    int k = rand() % 15 + 1;
    std::cout << "Случайное k: " << k << std::endl;
    std::cout << k << " случайных чисел от " << min_val << " до " << max_val << ":" << std::endl;

    for (int i = 0; i < k; ++i) {
        int random_num = rand() % (max_val - min_val + 1) + min_val;
        std::cout << random_num << " ";
    }
    std::cout << std::endl;
    return 0;
}
