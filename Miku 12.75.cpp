

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t firstSpace = s.find("  ");
    if (firstSpace != string::npos) {
        cout << "Первое слово: " << s.substr(0, firstSpace) << endl;
    } else {
        cout << "Нет двойных пробелов. Первое слово: " << s << endl;
    }
    
    return 0;
}
