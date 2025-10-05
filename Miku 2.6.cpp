#include <iostream>
using namespace std;

int main() {
    double a;

    cout << "Введите длину ребра куба: ";
    cin >> a;

    cout << "Объем куба: " << a * a * a << endl;
    cout << "Площадь боковой поверхности: " << 4 * a * a << endl;

    return 0;
}
