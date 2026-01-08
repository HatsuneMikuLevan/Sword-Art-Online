

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    bool found = false;
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            cout << "Первая пара одинаковых символов на позициях " 
                 << (i + 1) << " и " << (i + 2) << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "Одинаковых соседних символов нет." << endl;
    }
    
    return 0;
}
