#include <iostream>   

int main() {
    setlocale(LC_ALL, "Russian");
    int number; 
    std::cin >> number;
    std::cout  << number << " - вот такое число Вы ввели ";

    return 0;
}