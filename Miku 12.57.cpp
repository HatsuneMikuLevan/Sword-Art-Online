

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int count = 0;
    for (char c : s) {
        if (c == 'о') count++;
    }
    
    cout << "Количество букв 'о': " << count << endl;
    
    return 0;
}
