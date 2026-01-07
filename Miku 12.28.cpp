

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "апельсин";
    cout << "Исходное слово: " << word << endl;



    string spantsel;
    spantsel += word[4]; // с
    spantsel += word[5]; // п
    spantsel += word[0]; // а
    spantsel += word[2]; // н
    spantsel += word[3]; // ц
    spantsel += word[6]; // е
    spantsel += word[7]; // л
    spantsel += word[1]; // ь

    cout << "Слово 'спанцель': " << spantsel << endl;

    return 0;
}
