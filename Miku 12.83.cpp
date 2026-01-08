

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    bool found = false;
    int pos = -1;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            found = true;
            pos = i + 1;
            break;
        }
    }
    
    if (found) {
        cout << "Буква 'a' найдена на позиции: " << pos << endl;
    } else {
        cout << "Буквы 'a' нет." << endl;
    }
    
    return 0;
}
