#include <iostream>

int main() {
    int n; 
    std::cout << "Введите количество секунд с начала суток: ";
    std::cin >> n;


    int hours = n / 3600;
    std::cout << "Полных часов с начала суток: " << hours << std::endl;


    int minutes = (n % 3600) / 60;
    std::cout << "Полных минут с начала очередного часа: " << minutes << std::endl;


    int seconds = n % 60;
    std::cout << "Полных секунд с начала очередной минуты: " << seconds << std::endl;

    return 0;
}
