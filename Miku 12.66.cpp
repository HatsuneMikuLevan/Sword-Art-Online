

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите текст: ";
    getline(cin, s);
    
    int count = 0;
    for (char c : s) {
        if (c == '+' || c == '-') count++;
    }
    
    cout << "Общее количество '+' и '-': " << count << endl;
    
    return 0;
}
