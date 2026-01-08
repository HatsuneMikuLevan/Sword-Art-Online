

#include <iostream>
#include <string>
using namespace std;

int main() {
    string path;
    cout << "Введите полный путь к файлу: ";
    getline(cin, path);
    
    string delimiter = "\\";
    size_t pos = 0;
    string token;
    
    while ((pos = path.find(delimiter)) != string::npos) {
        token = path.substr(0, pos);
        cout << token << endl;
        path.erase(0, pos + delimiter.length());
    }
    cout << path << endl;
    
    return 0;
}
