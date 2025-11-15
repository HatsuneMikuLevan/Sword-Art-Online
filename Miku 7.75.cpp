

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

const double G = 9.8;
const double PI = 3.14159265358979323846;

int main() {
    int n;
    cout << "Введите количество пар значений (n): ";
    cin >> n;

    // Использование массивов (векторов) для хранения данных
    vector<double> alphas(n);
    vector<double> v0s(n);

    cout << "Введите углы (в радианах) и начальные скорости для каждой пары:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Пара " << i + 1 << " (alpha v0): ";
        cin >> alphas[i] >> v0s[i];
    }

    double R, H, P;
    cout << "Введите расстояние до цели (R), высоту цели (H) и высоту цели (P): ";
    cin >> R >> H >> P;

    int hitCount = 0;

    for (int i = 0; i < n; ++i) {
        double alpha = alphas[i];
        double v0 = v0s[i];

        // Расчет времени полета до расстояния R
        double t = R / (v0 * cos(alpha));

        // Расчет высоты в этот момент
        double y = v0 * t * sin(alpha) - 0.5 * G * t * t;

        // Проверка условия попадания
        if (y >= H && y <= H + P) {
            hitCount++;
        }
    }

    double hitPercentage = (static_cast<double>(hitCount) / n) * 100.0;

    cout << fixed << setprecision(2);
    cout << "Процент попадания: " << hitPercentage << "%" << endl;

    return 0;
}
