

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_11127(const std::vector<double>& book_prices) {
    if (book_prices.empty()) {
        std::cout << "Данные о ценах отсутствуют." << std::endl;
        return;
    }

    double min_price = INT_MAX;
    int count = 0;

    for (double price : book_prices) {
        if (price < min_price) {
            min_price = price;
            count = 1;
        } else if (price == min_price) {
            count++;
        }
    }

    std::cout << "Самая дешевая книга стоит: " << min_price << ", количество книг: " << count << std::endl;
}

int main() {
    std::vector<double> book_prices = {199.99, 50.00, 150.00, 50.00, 299.99, 50.00};
    solve_11127(book_prices);
    return 0;
}
