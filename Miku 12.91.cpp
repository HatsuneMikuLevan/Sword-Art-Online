

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t posChu = s.find("чу");
    size_t posShu = s.find("щу");
    
    if (posChu != string::npos || posShu != string::npos) {
        size_t firstPos = min(posChu, posShu);
        cout << "Первое буквосочетание найдено на позиции: " << (firstPos + 1) << endl;
    } else {
        cout << "Буквосочетаний 'чу' и 'щу' нет." << endl;
    }
    
    return 0;
}
