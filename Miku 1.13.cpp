#include <iostream>


int main() {

    int number;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите целое число: ";
    std::cin >> number;
    int a = number + 1;
    int b = number - 1;
    std::cout << "Следующее за числом " << number << " число – " << a << ".";
    std::cout << "Для числа " << number << " предыдущее число – " << b << ".";



    return 0;

}
