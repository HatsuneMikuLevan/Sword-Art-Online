

#include <iostream>
#include <vector>

struct Triplet {
    int a, b, c;
};

int main() {
    // Пример массива троек (a < b < c)
    std::vector<Triplet> triplets = {{3, 4, 5}, {1, 2, 4}, {5, 12, 13}, {2, 3, 10}};
    int triangle_count = 0;

    for (int i = 0; i < triplets.size(); ++i) {
        // Условие существования треугольника: a + b > c
        if (triplets[i].a + triplets[i].b > triplets[i].c) {
            triangle_count++;
        }
    }

    std::cout << "Количество троек, пригодных для построения треугольника: " << triangle_count << std::endl;
    return 0;
}
