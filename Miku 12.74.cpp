

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t commaPos = s.find(',');
    if (commaPos != string::npos) {
        cout << "Символы до первой запятой: " << s.substr(0, commaPos) << endl;
    } else {
        cout << "Запятых нет. Выводим всю строку: " << s << endl;
    }
    
    return 0;
}
