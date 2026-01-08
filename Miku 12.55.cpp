

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    for (size_t i = 0; i < s.length(); i++) {
        if ((i + 1) % 2 == 0 && s[i] == 'и') {
            cout << s[i] << endl;
        }
    }
    
    return 0;
}
