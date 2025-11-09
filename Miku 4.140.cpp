

#include <iostream>
#include <string>
#include <map>

std::string getFullCardName(int m, int k) {
    std::map<int, std::string> suits;
    suits[1] = "пик";
    suits[2] = "треф";
    suits[3] = "бубен";
    suits[4] = "червей";

    std::map<int, std::string> ranks;
    ranks[6] = "Шестерка";
    ranks[7] = "Семерка";
    ranks[8] = "Восьмерка";
    ranks[9] = "Девятка";
    ranks[10] = "Десятка";
    ranks[11] = "Валет";
    ranks[12] = "Дама";
    ranks[13] = "Король";
    ranks[14] = "Туз";

    if (suits.count(m) && ranks.count(k)) {
        return ranks[k] + " " + suits[m];
    } else {
        return "Неизвестная карта";
    }
}

int main() {
    int m, k;
    std::cout << "Введите номер масти (1-4): ";
    std::cin >> m;
    std::cout << "Введите номер достоинства (6-14): ";
    std::cin >> k;
    std::cout << "Полное название карты: " << getFullCardName(m, k) << std::endl;
    return 0;
}
