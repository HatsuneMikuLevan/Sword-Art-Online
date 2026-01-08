

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    string delimiter = "  ";
    size_t pos1 = s.find(delimiter);
    size_t pos2 = (pos1 != string::npos) ? s.find(delimiter, pos1 + 2) : string::npos;
    size_t pos3 = (pos2 != string::npos) ? s.find(delimiter, pos2 + 2) : string::npos;
    
    if (pos3 != string::npos) {
        cout << "Первое слово: " << s.substr(0, pos1) << endl;
        cout << "Второе слово: " << s.substr(pos1 + 2, pos2 - pos1 - 2) << endl;
        cout << "Третье слово: " << s.substr(pos2 + 2, pos3 - pos2 - 2) << endl;
    } else {
        cout << "Недостаточно слов." << endl;
    }
    
    return 0;
}
