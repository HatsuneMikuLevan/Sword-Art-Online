

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int countO = 0, countA = 0;
    for (char c : s) {
        if (c == 'о') countO++;
        else if (c == 'а') countA++;
    }
    
    if (countO > countA) {
        cout << "Буква 'о' встречается чаще." << endl;
    } else if (countA > countO) {
        cout << "Буква 'а' встречается чаще." << endl;
    } else {
        cout << "Буквы 'о' и 'а' встречаются одинаково часто." << endl;
    }
    
    return 0;
}
