

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Перечисления для мастей и достоинств с учетом старшинства
enum Suit { PIKES, CLUBS, DIAMONDS, HEARTS };
enum Rank { SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };

struct Card {
    Suit suit;
    Rank rank;
};

// Функции для получения строковых представлений
string suitToString(Suit s) {
    switch (s) {
        case PIKES: return "пики";
        case CLUBS: return "трефы";
        case DIAMONDS: return "бубны";
        case HEARTS: return "червы";
    }
    return "";
}

string rankToString(Rank r) {
    switch (r) {
        case SIX: return "шестерка";
        case SEVEN: return "семерка";
        case EIGHT: return "восьмерка";
        case NINE: return "девятка";
        case TEN: return "десятка";
        case JACK: return "валет";
        case QUEEN: return "дама";
        case KING: return "король";
        case ACE: return "туз";
    }
    return "";
}

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел

    // Выбор карт для игроков
    Card player1Card = {static_cast<Suit>(rand() % 4), static_cast<Rank>(rand() % 9)};
    Card player2Card = {static_cast<Suit>(rand() % 4), static_cast<Rank>(rand() % 9)};

    cout << "Карта игрока 1: " << rankToString(player1Card.rank) << " " << suitToString(player1Card.suit) << endl;
    cout << "Карта игрока 2: " << rankToString(player2Card.rank) << " " << suitToString(player2Card.suit) << endl;

    // Определение старшей карты
    if (player1Card.suit > player2Card.suit) {
        cout << "Игрок 1 выиграл (старшая масть)" << endl;
    } else if (player2Card.suit > player1Card.suit) {
        cout << "Игрок 2 выиграл (старшая масть)" << endl;
    } else {
        // Масти равны, сравниваем достоинства
        if (player1Card.rank > player2Card.rank) {
            cout << "Игрок 1 выиграл (старшее достоинство)" << endl;
        } else if (player2Card.rank > player1Card.rank) {
            cout << "Игрок 2 выиграл (старшее достоинство)" << endl;
        } else {
            cout << "Ничья" << endl;
        }
    }

    return 0;
}
