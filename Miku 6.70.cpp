

#include <iostream>
#include <vector>
#include <map>

void solve(int a, int b) {
    if (a <= 0 || b <= 0) {
        std::cout << "Размеры прямоугольника должны быть положительными." << std::endl;
        return;
    }

    std::map<int, int> counts;
    
    // Используем один цикл для имитации алгоритма Евклида
    while (b > 0) {
        if (a < b) {
            std::swap(a, b);
        }
        int num_squares = a / b;
        counts[b] += num_squares;
        a %= b;
        if (a == 0) {
            break;
        }
    }
    
    std::cout << "Исходный прямоугольник разрезан на:" << std::endl;
    for (auto const& [side, count] : counts) {
        std::cout << count << " квадратов со стороной " << side << std::endl;
    }
}

int main() {
    std::cout << "Для задачи 6.69 (a=425, b=131):" << std::endl;
    solve(425, 131);
    
    // Пример для других значений
    // std::cout << "\nПример для a=1680, b=640:" << std::endl;
    // solve(1680, 640);

    return 0;
}
