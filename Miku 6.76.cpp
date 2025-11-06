
#include <iostream>
#include <algorithm>

void solve6_76() {
    int a, b;
    std::cout << "Введите размеры лужайки a и b: ";
    std::cin >> a >> b;

    int length = 0;
    int current_a = a;
    int current_b = b;
    bool horizontal = true;

    while (current_a > 0 && current_b > 0) {
        if (horizontal) {
            if (current_b == 1) {
                length += current_a - 1;
                break;
            }
            length += current_b - 1;
            current_a--;
        } else {
            if (current_a == 1) {
                length += current_b - 1;
                break;
            }
            length += current_a - 1;
            current_b--;
        }
        horizontal = !horizontal;
    }
    
    std::cout << "Длина ограждения: " << length << std::endl;
}
