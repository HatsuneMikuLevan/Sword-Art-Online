

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;


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

    Suit trumpSuit = static_cast<Suit>(rand() % 4); // Выбор козырной масти
    cout << "Козырная масть: " << suitToString(trumpSuit) << endl;

    Card player1Card = {static_cast<Suit>(rand() % 4), static_cast<Rank>(rand() % 9)};
    Card player2Card = {static_cast<Suit>(rand() % 4), static_cast<Rank>(rand() % 9)};

    cout << "Карта игрока 1: " << rankToString(player1Card.rank) << " " << suitToString(player1Card.suit) << endl;
    cout << "Карта игрока 2: " << rankToString(player2Card.rank) << " " << suitToString(player2Card.suit) << endl;

    bool p1Trump = (player1Card.suit == trumpSuit);
    bool p2Trump = (player2Card.suit == trumpSuit);

    if (p1Trump && !p2Trump) {
        cout << "Игрок 1 выиграл (козырь)" << endl;
    } else if (!p1Trump && p2Trump) {
        cout << "Игрок 2 выиграл (козырь)" << endl;
    } else {
        // Обе карты козырные или обе не козырные, сравниваем по обычным правилам
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
    }

    return 0;
}
