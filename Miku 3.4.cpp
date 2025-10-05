#include <iostream>

int main() {
    int N, k;
    std::cout << "Введите количество школьников (N): ";
    std::cin >> N;
    std::cout << "Введите количество яблок (k): ";
    std::cin >> k;
    int apples_per_student = k / N;
    int remaining_apples = k % N;
    std::cout << "Каждому школьнику достанется " << apples_per_student << " яблок." << std::endl;
    std::cout << "В корзинке останется " << remaining_apples << " яблок." << std::endl;
    return 0;
}
