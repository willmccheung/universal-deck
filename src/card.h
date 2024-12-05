#pragma once

#include <iostream>
#include "token.h"

class Card : public Token{
public:

    enum Suit{
        UNSUITED = 0,
        DIAMONDS,
        CLUBS,
        HEARTS,
        SPADES
    };
    enum Rank{
        UNRANKED = 0,
        ACE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING
    };

    Card(std::string name, Rank rank, Suit suit);
    Card(Rank rank, Suit suit);
    virtual ~Card();

    Rank getRank();
    Suit getSuit();

protected:
    Rank _rank {};
    Suit _suit {};
};