

#include <iostream>
#include <vector>
#include <numeric> // Для std::accumulate

using namespace std;

int main() {
    // Июль (31 день) и Август (31 день)
    vector<double> salesJuly = {100.5, 200.0, /* ... 31 значение */ 150.0};
    vector<double> salesAugust = {120.0, 180.5, /* ... 31 значение */ 140.0};

    // Заполнение массивов для примера
    salesJuly.resize(31, 100.0);
    salesAugust.resize(31, 110.0);

    double totalSalesJuly = accumulate(salesJuly.begin(), salesJuly.end(), 0.0);
    double totalSalesAugust = accumulate(salesAugust.begin(), salesAugust.end(), 0.0);
    double totalSales = totalSalesJuly + totalSalesAugust;

    cout << "Общая стоимость проданных товаров за два месяца: " << totalSales << endl;
    return 0;
}
