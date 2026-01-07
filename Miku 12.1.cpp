

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    string copy = word;
    cout << "Копия слова: " << copy << endl;
    
    return 0;
}
