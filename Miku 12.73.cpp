

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите текст: ";
    getline(cin, s);
    
    bool found = false;
    for (size_t i = 0; i <= s.length() - 5; i++) {
        bool same = true;
        for (int j = 1; j < 5; j++) {
            if (s[i] != s[i + j]) {
                same = false;
                break;
            }
        }
        if (same) {
            found = true;
            break;
        }
    }
    
    cout << (found ? "Да, есть 5 одинаковых подряд." 
                   : "Нет, нет 5 одинаковых подряд.") << endl;
    
    return 0;
}
