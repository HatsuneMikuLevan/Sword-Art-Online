

#include <iostream>
#include <vector>

int main() {
    const int days_in_march = 31;
    std::vector<double> precipitations(days_in_march);
    std::cout << "Введите количество осадков (мм) за каждый из 31 дня марта: ";
    for (int i = 0; i < days_in_march; ++i) {
        std::cin >> precipitations[i];
    }

    int count_no_rain_days = 0;
    for (int i = 0; i < days_in_march; ++i) {
        if (precipitations[i] == 0) {
            count_no_rain_days++;
        }
    }

    if (count_no_rain_days == 10) {
        std::cout << "Осадков не было ровно 10 дней. Утверждение верно." << std::endl;
    } else {
        std::cout << "Осадков не было " << count_no_rain_days << " дней (не 10). Утверждение неверно." << std::endl;
    }

    return 0;
}
