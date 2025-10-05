#include <iostream>  
#include <string>    
  
int main() {  
    
    setlocale(LC_ALL, "Russian");
    std::string name;   
      
    std::cout << "Введите ваше имя: ";  
    std::cin >> name;  
    std::cout << "Вы ввели имя: " << name << std::endl;  
      
    return 0;  
}  

