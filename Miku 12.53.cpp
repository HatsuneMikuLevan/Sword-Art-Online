

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char a, b;
    
    cout << "Введите предложение: ";
    getline(cin, s);
    
    cout << "Введите первый символ: ";
    cin >> a;
    
    cout << "Введите второй символ: ";
    cin >> b;
    
    for (char c : s) {
        if (c == a || c == b) {
            cout << c << endl;
        }
    }
    
    return 0;
}
