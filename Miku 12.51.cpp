

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    for (size_t i = 2; i < s.length(); i += 3) {
        cout << s[i] << endl;
    }
    
    return 0;
}
