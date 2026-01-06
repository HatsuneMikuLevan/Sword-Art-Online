

#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <clocale>

using namespace std;



{


    #### Step 1: Подготовка данных


    #### Step 2: Вычисление средней длины слова (а)
    double total_length = 0;
    for (const string& word : words) {
        total_length += word.length();
    }
    double average_length = total_length / words.size();
    cout << "а) Средняя длина слова: " << average_length << "\n";

    #### Step 3: Подсчет слов длиннее пяти символов (б)
    int count_long_words = 0;
    for (const string& word : words) {
        if (word.length() > 5) {
            count_long_words++;
        }
    }
    cout << "б) Количество слов длиннее 5 символов: " << count_long_words << endl;

    #### Step 4: Определение длины самого длинного слова (в)
    size_t max_len = 0;
    for (const string& word : words) {
        if (word.length() > max_len) {
            max_len = word.length();
        }
    }
    cout << "в) Длина самого длинного слова: " << max_len << endl;

    #### Step 5: Поиск индекса первого самого короткого слова (г)
    size_t min_len = -1; // Инициализируем максимальным значением size_t
    int first_shortest_index = -1;
    for (int i = 0; i < words.size(); ++i) {
        if (words[i].length() < min_len) {
            min_len = words[i].length();
            first_shortest_index = i;
        }
    }
    cout << "г) Индекс первого самого короткого слова: " << first_shortest_index << " (слово: \"" << words[first_shortest_index] << "\")" << endl;

    #### Step 6: Определение длины второго по длине слова (д)
    // Сначала сортируем слова по длине
    vector<string> sorted_by_length = words;
    sort(sorted_by_length.begin(), sorted_by_length.end(), [](const string& a, const string& b){ return a.length() < b.length(); });

    size_t second_max_len = 0;
    // Идем с конца, чтобы найти вторую по величине длину, пропуская дубликаты
    for (int i = sorted_by_length.size() - 2; i >= 0; --i) {
        if (sorted_by_length[i].length() != sorted_by_length.back().length()) {
            second_max_len = sorted_by_length[i].length();
            break;
        }
    }
    cout << "д) Длина второго по длине слова: " << second_max_len << endl;

    #### Step 7: Подсчет слов на 'к' или 'К' (е)
    int count_k_words = 0;
    for (const string& word : words) {
        if (!word.empty() && (word.front() == 'к' || word.front() == 'К')) {
            count_k_words++;
        }
    }
    cout << "е) Количество слов, начинающихся на 'к' или 'К': " << count_k_words << endl;

    #### Step 8: Сортировка массива в алфавитном порядке
    vector<string> sorted_alphabetically = words;
    sort(sorted_alphabetically.begin(), sorted_alphabetically.end());
    cout << "Массив слов в алфавитном порядке: ";
    for (const string& word : sorted_alphabetically) {
        cout << word << " ";
    }
    cout << "\n";
}

int main() {

    setlocale(LC_ALL, "Russian");
    solve_11_261();
    return 0;
}
