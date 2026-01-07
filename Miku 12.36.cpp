

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово из 12 букв: ";
    cin >> word;

    if (word.length() == 12) {
        string part1 = word.substr(0, 4);   // первая треть
        string part2 = word.substr(4, 4);   // вторая треть
        string part3 = word.substr(8, 4);   // третья треть

        string result = part2 + part3 + part1; // 2 -> 1, 3 -> 2, 1 -> 3
        cout << "Результат (a): " << result << endl;
    } else {
        cout << "Слово должно содержать ровно 12 букв." << endl;
    }

    return 0;
}
