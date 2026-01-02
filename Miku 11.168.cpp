

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Mountain {
    std::string name;
    int height;
};

void insertMountain(std::vector<Mountain>& mountains, Mountain newMountain, int position) {

    if (position >= 1 && position <= mountains.size() + 1) {
        mountains.insert(mountains.begin() + (position - 1), newMountain);
    } else {
        std::cout << "Неверный порядковый номер для вставки." << std::endl;
    }
}

int main() {
    std::vector<Mountain> mountains = {
        {"Everest", 8848},
        {"K2", 8611},
        {"Kangchenjunga", 8586}

    };

    Mountain newMountain = {"Broad Peak", 8051};
    int knownPosition = 2; 

    insertMountain(mountains, newMountain, knownPosition);

    std::cout << "Обновленный список вершин:" << std::endl;
    for (const auto& m : mountains) {
        std::cout << m.name << " : " << m.height << " м" << std::endl;
    }
    
    return 0;
}
