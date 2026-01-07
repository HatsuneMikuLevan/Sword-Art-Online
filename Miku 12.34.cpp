

#include <iostream>
#include <string>
using namespace std;

int main() {
    string tverdogo = "твердого";
    cout << "Исходное слово: " << tverdogo << endl;

    string bienie = tverdogo;
    bienie[0] = 'б'; // т -> б
    bienie[1] = 'и'; // в -> и
    bienie[2] = 'е'; // е -> е (уже е)
    bienie[3] = 'н'; // р -> н
    bienie[4] = 'и'; // д -> и
    bienie[5] = 'е'; // о -> е
    // остальные буквы остаются

    cout << "После замены: " << bienie << endl;

    return 0;
}
