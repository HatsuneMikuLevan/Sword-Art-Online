

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int n, k;
    
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите n и k (1 <= n <= k <= длина слова): ";
    cin >> n >> k;
    
    if (n >= 1 && k <= word.length() && n <= k) {
        string part = word.substr(n - 1, k - n + 1);
        cout << "Часть слова: " << part << endl;
    } else {
        cout << "Некорректные значения n или k." << endl;
    }
    
    return 0;
}
