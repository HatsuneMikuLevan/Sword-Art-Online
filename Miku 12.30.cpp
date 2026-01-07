

#include <iostream>
#include <string>
using namespace std;

int main() {
    string kurs = "курсор";
    cout << "Исходное слово: " << kurs << endl;

    string tancor = kurs;
    tancor[0] = 'т'; 
    tancor[1] = 'а'; 
    tancor[2] = 'н'; 
    tancor[3] = 'ц';
  


    cout << "После замены: " << tancor << endl;

    return 0;
}
