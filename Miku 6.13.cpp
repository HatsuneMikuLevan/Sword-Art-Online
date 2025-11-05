#include <iostream>

int main() {
    int i = 10;
    while (i <= 30) {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}
#include <iostream>

int main() {
    int i = 10;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i <= 30);
    return 0;
}
