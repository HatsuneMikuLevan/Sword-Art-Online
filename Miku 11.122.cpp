

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    std::vector<double> prices(30);
 
    prices = {250.0, 300.0, 250.0, 400.0, /* ... еще 26 значений ... */};

    double min_price = *std::min_element(prices.begin(), prices.end());
    int first_index = -1;

    for (int i = 0; i < prices.size(); ++i) {
        if (prices[i] == min_price) {
            first_index = i + 1; // Порядковый номер (начиная с 1)
            break; // Находим только первый
        }
    }

    std::cout << "Порядковый номер первого самого дешевого вида конфет: " << first_index << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    std::vector<double> prices(30);
  
    prices = {250.0, 300.0, 250.0, 400.0, /* ... еще 26 значений ... */};

    double min_price = *std::min_element(prices.begin(), prices.end());
    int last_index = -1;

    for (int i = 0; i < prices.size(); ++i) {
        if (prices[i] == min_price) {
            last_index = i + 1; // Обновляем до последнего найденного
        }
    }

    std::cout << "Порядковый номер последнего самого дешевого вида конфет: " << last_index << std::endl;

    return 0;
}
