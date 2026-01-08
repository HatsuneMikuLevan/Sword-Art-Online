

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int countA = 0;
    int totalLetters = 0;
    
    for (char c : s) {
        if (isalpha(c)) {
            totalLetters++;
            if (c == 'а') countA++;
        }
    }
    
    if (totalLetters == 0) {
        cout << "В предложении нет букв." << endl;
    } else {
        double percentage = (countA * 100.0) / totalLetters;
        cout << fixed << setprecision(2);
        cout << "Доля букв 'а': " << percentage << "%" << endl;
    }
    
    return 0;
}
