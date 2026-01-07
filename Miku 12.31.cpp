

#include <iostream>
#include <string>
using namespace std;

int main() {
    string probel = "пробел";
    cout << "Исходное слово: " << probel << endl;

    string prodel = probel;
    prodel[3] = 'д'; 

    cout << "После замены: " << prodel << endl;

    return 0;
}
