#include <iostream> 
#include <string>    

int main() {

    setlocale(LC_ALL, "Russian");
    std::string name;

    std::cout << "Введите название футбольной команды: ";
    std::cin >> name;
    std::cout << name << " - это чемпион! " << std::endl;

    return 0;
}
