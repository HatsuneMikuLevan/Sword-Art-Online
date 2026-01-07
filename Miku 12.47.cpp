

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;

    int len = word.length();
    string stars(len, '*');
    string result = stars + word + stars;

    cout << "Результат: " << result << endl;

    return 0;
}
