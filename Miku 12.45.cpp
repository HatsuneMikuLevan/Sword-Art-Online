

#include <iostream>
#include <string>
using namespace std;

int main() {
    char symbol;
    int count;

    cout << "Введите символ: ";
    cin >> symbol;
    cout << "Введите количество повторений: ";
    cin >> count;

    string result(count, symbol);
    cout << "Результат: " << result << endl;

    return 0;
}
