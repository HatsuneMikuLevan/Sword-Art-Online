

#include <iostream>
#include <string>
using namespace std;

int main() {
    string virus = "вирус";
    cout << "Исходное слово: " << virus << endl;

    string focus = virus;
    focus[0] = 'ф'; 
    focus[1] = 'о'; 
    focus[2] = 'к'; 
 

    cout << "После замены: " << focus << endl;

    return 0;
}
