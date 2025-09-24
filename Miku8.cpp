#include <iostream>   

int main() {
    setlocale(LC_ALL, "Russian");
    int number; 
    std::cin >> number;
    std::cout << "Вы ввели число " << number;

    return 0;
}