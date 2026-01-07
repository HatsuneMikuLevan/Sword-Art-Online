
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "клоун";
    cout << "Исходное слово: " << word << endl;

    string uklon;
    uklon += word[4];
    uklon += word[0];
    uklon += word[1];
    uklon += word[3];
    uklon += word[2];
    cout << "Слово 'уклон': " << uklon << endl;

    string kulon;
    kulon += word[0];
    kulon += word[4];
    kulon += word[1];
    kulon += word[3];
    kulon += word[2];
    cout << "Слово 'кулон': " << kulon << endl;

    string kolun;
    kolun += word[0];
    kolun += word[3];
    kolun += word[1];
    kolun += word[4];
    kolun += word[2];
    cout << "Слово 'колун': " << kolun << endl;

    return 0;
}
