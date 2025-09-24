
#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    std::string name;

    std::cout << "Ââåäèòå âàøå èìÿ: ";
    std::getline(std::cin, name);  // Èñïîëüçóåì getline äëÿ ñ÷èòûâàíèÿ ñòðîêè ñ ïðîáåëàìè
    std::cout << "Âû ââåëè èìÿ: " << name << std::endl;

    return 0;

}
