#include
int main() {
int a, b;
std::cout << "Введите два целых числа a и b: ";
std::cin >> a >> b;

if (b != 0 && a % b == 0) {
std::cout << "Число a является делителем b." << std::endl;
} else if (a != 0 && b % a == 0) {
std::cout << "Число b является делителем a." << std::endl;
} else {
std::cout << "Ни одно из чисел не является делителем другого." << std::endl;
}

return 0;
}
