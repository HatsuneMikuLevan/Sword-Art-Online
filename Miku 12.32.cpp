

#include <iostream>
#include <string>
using namespace std;

int main() {
    string stroka = "строка";
    cout << "Исходное слово: " << stroka << endl;

    string strofa = stroka;
    strofa[4] = 'ф'; 


    cout << "После замены: " << strofa << endl;

    return 0;
}
