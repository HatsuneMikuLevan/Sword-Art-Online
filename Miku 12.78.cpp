

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t lastSpace = s.find_last_of(' ');
    size_t secondLastSpace = s.find_last_of(' ', lastSpace - 1);
    
    if (secondLastSpace != string::npos) {
        cout << "Предпоследнее слово: " << s.substr(secondLastSpace + 1, lastSpace - secondLastSpace - 1) << endl;
        cout << "Последнее слово: " << s.substr(lastSpace + 1) << endl;
    } else {
        cout << "Недостаточно слов." << endl;
    }
    
    return 0;
}
