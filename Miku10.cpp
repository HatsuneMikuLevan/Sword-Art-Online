
#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    std::string name;

    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, name);  // Используем getline для считывания строки с пробелами
    std::cout << "Вы ввели имя: " << name << std::endl;

    return 0;
}