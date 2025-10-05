#include <iostream>  
#include <string>

int main() {
    
    setlocale(LC_ALL, "Russian");
    std::string number; 
    std::cin >> number;
    std::cout << " «Вы ввели число " << number;

    return 0;

}
