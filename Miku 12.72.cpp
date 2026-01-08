

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int lastC = -1, lastM = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'c') lastC = i;
        else if (s[i] == 'm') lastM = i;
    }
    
    if (lastC > lastM) {
        cout << "Буква 'c' встречается позже." << endl;
    } else if (lastM > lastC) {
        cout << "Буква 'm' встречается позже." << endl;
    } else {
        cout << "Обе буквы встречаются на одной позиции или отсутствуют." << endl;
    }
    
    return 0;
}
