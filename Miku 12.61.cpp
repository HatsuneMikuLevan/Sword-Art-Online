

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите текст: ";
    getline(cin, s);
    
    int countPlus = 0, countStar = 0;
    for (char c : s) {
        if (c == '+') countPlus++;
        else if (c == '*') countStar++;
    }
    
    cout << "Количество '+': " << countPlus << endl;
    cout << "Количество '*': " << countStar << endl;
    
    return 0;
}
