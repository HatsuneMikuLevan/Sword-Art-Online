#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int h, m;
    cout << "Введите часы (0 < h <= 12): ";
    cin >> h;
    cout << "Введите минуты (0 <= m <= 59): ";
    cin >> m;

    if (h == 12) {
        h = 0;
    }


    double angle_h = (h * 30.0) + (m * 0.5);
    double angle_m = m * 6.0;


    double relative_speed = 5.5;

    // а) Время до совпадения
    double diff_angle_a = fmod(angle_h - angle_m + 360.0, 360.0);
    double t_a = diff_angle_a / relative_speed;
    if (t_a < 0) {
        t_a += 360.0 / relative_speed;
    }

    // б) Время до перпендикулярности
    double diff_angle_b1 = fmod(angle_h - angle_m + 90.0 + 360.0, 360.0);
    double t_b1 = diff_angle_b1 / relative_speed;
    if (t_b1 < 0) {
        t_b1 += 360.0 / relative_speed;
    }

    double diff_angle_b2 = fmod(angle_h - angle_m - 90.0 + 360.0, 360.0);
    double t_b2 = diff_angle_b2 / relative_speed;
    if (t_b2 < 0) {
        t_b2 += 360.0 / relative_speed;
    }

    double t_b = min(t_b1, t_b2);

    cout << fixed << setprecision(0);
    cout << "а) Время до совпадения стрелок: " << round(t_a) << " минут" << endl;
    cout << "б) Время до перпендикулярности стрелок: " << round(t_b) << " минут" << endl;

    return 0;
}
