#include <iostream>

int main() {
    int n;
    std::cout << "Введите порядковый номер значения: ";
    std::cin >> n;


    int row = (n - 1) / 5 + 1;
    std::cout << "Значение с порядковым номером " << n << " находится в строке " << row << "." << std::endl;

    int column = (n - 1) % 5 + 1;
    std::cout << "Значение с порядковым номером " << n << " находится в столбце " << column << "." << std::endl;

    return 0;
}
