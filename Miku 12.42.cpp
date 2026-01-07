

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Введите слово s: ";
    cin >> s;

    string t = s;
    reverse(t.begin(), t.end());

    cout << "Слово t (обратное): " << t << endl;

    return 0;
}
