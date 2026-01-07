

#include <iostream>
#include <string>
using namespace std;

int main() {
    string club;
    cout << "Введите название футбольного клуба: ";
    getline(cin, club);

    cout << "Название клуба столбиком:" << endl;
    for (char c : club) {
        cout << c << endl;
    }

    return 0;
}
