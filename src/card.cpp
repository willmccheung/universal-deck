#include "card.h"

Card::Card(std::string name, Card::Rank rank, Card::Suit suit) : Token(name), _rank{rank}, _suit{suit} {};

Card::~Card() = default;

std::string getRankString(Card::Rank rank);
std::string getSuitString(Card::Suit suit);


Card::Card(Card::Rank rank, Card::Suit suit) : Token(""), _rank{rank}, _suit{suit} 
{
    _name = getRankString(rank) + " of " + getSuitString(suit);
};

std::string getRankString(Card::Rank rank){
    switch(rank){
        case 1:
            return "Ace";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        case 10:
            return "Ten";
        case 11:
            return "Jack";
        case 12:
            return "Queen";
        case 13:
            return "King";
        default:
            return "Blank";
    }
}
std::string getSuitString(Card::Suit suit){
    switch(suit){
        case 1:
            return "Diamonds";
        case 2:
            return "Clubs";
        case 3:
            return "Hearts";
        case 4:
            return "Spades";
        default:
            return "Blank";
    }
}