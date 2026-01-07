

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;

    string result = "++++" + word + "-----";
    cout << "Результат: " << result << endl;

    return 0;
}
