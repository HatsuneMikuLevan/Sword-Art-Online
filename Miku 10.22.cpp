

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Перечисления и функции из задачи 10.21
enum Suit { PIKES, CLUBS, DIAMONDS, HEARTS };
enum Rank { SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };

struct Card {
    Suit suit;
    Rank rank;
};

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
    srand(time(0));
    char choice;

    do {
        Card player1Card = {static_cast<Suit>(rand() % 4), static_cast<Rank>(rand() % 9)};
        Card player2Card = {static_cast<Suit>(rand() % 4), static_cast<Rank>(rand() % 9)};

        cout << "Карта игрока 1: " << rankToString(player1Card.rank) << " " << suitToString(player1Card.suit) << endl;
        cout << "Карта игрока 2: " << rankToString(player2Card.rank) << " " << suitToString(player2Card.suit) << endl;

        if (player1Card.suit > player2Card.suit) {
            cout << "Игрок 1 выиграл" << endl;
        } else if (player2Card.suit > player1Card.suit) {
            cout << "Игрок 2 выиграл" << endl;
        } else {
            if (player1Card.rank > player2Card.rank) {
                cout << "Игрок 1 выиграл" << endl;
            } else if (player2Card.rank > player1Card.rank) {
                cout << "Игрок 2 выиграл" << endl;
            } else {
                cout << "Ничья" << endl;
            }
        }

        cout << "Играем еще раз? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
