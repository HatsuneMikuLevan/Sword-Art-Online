#include <iostream>
#include <string>

int main(){
   
    setlocale(LC_ALL,"Russian");
    std::string name;
    std::cin >> name;
    std::cout << "Привет" << ", " << name << "!";

    return 0;
    
}
