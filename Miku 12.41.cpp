

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    cout << "Введите слово s1: ";
    cin >> s1;

    string s2;
    for (int i = 0; i < s1.length(); i += 2) { // индексы 0,2,4... (нечетные позиции)
        s2 += s1[i];
    }

    cout << "Слово из нечетных букв s2: " << s2 << endl;

    return 0;
}
