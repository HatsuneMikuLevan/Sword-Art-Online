

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'и' && s[i + 1] == 'н') {
            cout << "ин (позиция " << i << ")" << endl;
        }
    }
    
    return 0;
}
