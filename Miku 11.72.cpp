

#include <iostream>
#include <vector>
#include <numeric>

int count_high_sales_days(const std::vector<double>& sales, double s) {
    int count = 0;
    for (double value : sales) {
        if (value > s) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<double> sales = {1000.5, 2500.0, 1500.75, 3000.0, 500.0, 1200.0};
    double s = 1500.0;
    std::cout << "Количество дней, в которые стоимость проданных товаров превысила " << s << ": " << count_high_sales_days(sales, s) << std::endl;
    return 0;
}
