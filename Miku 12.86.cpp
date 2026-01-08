

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите последовательность: ";
    getline(cin, s);
    
    if (s.empty()) {
        cout << "Последовательность пуста." << endl;
        return 0;
    }
    
    char firstChar = s[0];
    int count = 1;
    
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == firstChar) {
            count++;
        } else {
            break;
        }
    }
    
    cout << "Количество одинаковых символов в начале: " << count << endl;
    
    return 0;
}
