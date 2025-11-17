

#include <iostream>
#include <algorithm>

int main() {
    int current_num, prev_num;
    int current_length = 1;
    int max_length = 1;
    bool is_increasing = true;
    bool first_element = true;

    std::cout << "Введите последовательность чисел (для завершения введите нечисловое значение):" << std::endl;

    while (std::cin >> current_num) {
        if (first_element) {
            prev_num = current_num;
            first_element = false;
            continue;
        }

        // Единственный условный оператор
        if ((current_num > prev_num) != is_increasing) {
            is_increasing = !is_increasing;
            current_length = 1;
        }

        current_length++;
        max_length = std::max(max_length, current_length);
        prev_num = current_num;
    }

    std::cout << "Наибольшая длина монотонного фрагмента: " << max_length << std::endl;

    return 0;
}
