

#include <iostream>
#include <vector>
#include <numeric>

bool compare_rainfall(const std::vector<int>& rainfall) {
    int even_sum = 0;
    int odd_sum = 0;
    for (size_t i = 0; i < rainfall.size(); ++i) {
   
        if ((i + 1) % 2 == 0) {
            even_sum += rainfall[i];
        } else {
            odd_sum += rainfall[i];
        }
    }
    return even_sum > odd_sum;
}

int main() {

    std::vector<int> rainfall = {1, 2, 0, 5, 3, 1, 4, 2, 1, 0, 5, 3, 2, 1, 0, 0, 2, 4, 1, 3, 5, 2, 1, 0, 3, 4, 2, 1};
    std::cout << "По четным дням выпало больше осадков, чем по нечетным: " << (compare_rainfall(rainfall) ? "Да" : "Нет") << std::endl;
    return 0;
}
