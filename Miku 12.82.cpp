

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int first = -1, last = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'c') {
            if (first == -1) first = i + 1;
            last = i + 1;
        }
    }
    
    if (first != -1) {
        cout << "Первая буква 'c' на позиции: " << first << endl;
        cout << "Последняя буква 'c' на позиции: " << last << endl;
    } else {
        cout << "Буквы 'c' нет." << endl;
    }
    
    return 0;
}
