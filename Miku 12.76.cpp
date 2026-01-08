

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t lastSpace = s.find_last_of(' ');
    if (lastSpace != string::npos) {
        cout << "Последнее слово: " << s.substr(lastSpace + 1) << endl;
    } else {
        cout << "Последнее слово: " << s << endl;
    }
    
    return 0;
}
