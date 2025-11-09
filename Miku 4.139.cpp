

#include <iostream>
#include <string>

std::string getCardRank(int k) {
    if (k == 11) {
        return "валет";
    } else if (k == 12) {
        return "дама";
    } else if (k == 13) {
        return "король";
    } else if (k == 14) {
        return "туз";
    } else if (k >= 6 && k <= 10) {
        // Для остальных карт можно просто вывести число
        // Или использовать map для более явного сопоставления
        // std::map<int, std::string> ranks = {{6, "шестерка"}, {7, "семерка"}, ...};
        return std::to_string(k);
    } else {
        return "Неизвестное достоинство";
    }
}

int main() {
    int k;
    std::cout << "Введите номер достоинства карты (6 <= k <= 14): ";
    std::cin >> k;
    std::cout << "Достоинство карты: " << getCardRank(k) << std::endl;
    return 0;
}
