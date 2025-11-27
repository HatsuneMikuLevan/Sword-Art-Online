

#include <iostream>
#include <vector>
#include <numeric>

bool isTotalBooksSixDigit(const std::vector<int>& bookCounts) {
    long long totalBooks = std::accumulate(bookCounts.begin(), bookCounts.end(), 0LL);
    return totalBooks >= 100000 && totalBooks <= 999999;
}

int main() {
    // Пример данных для 35 разделов
    std::vector<int> counts(35, 3000); // Допустим, в каждом разделе по 3000 книг

    std::cout << "Общее число книг шестизначно? " << (isTotalBooksSixDigit(counts) ? "Да" : "Нет") << std::endl;

    return 0;
}
