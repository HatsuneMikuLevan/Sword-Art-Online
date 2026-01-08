

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int count = 0;
    for (char c : s) {
        if (c == ' ') count++;
    }
    
    cout << "Количество пробелов: " << count << endl;
    
    return 0;
}
