

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    for (size_t i = 0; i < s.length(); i++) {
        int pos = i + 1;
        if (pos % 4 == 1 || pos % 4 == 2) {
            cout << s[i] << endl;
        }
    }
    
    return 0;
}
