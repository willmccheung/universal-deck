#pragma once

#include <iostream>
#include <vector>

#include "card.h"

// This holds all of the cards that will populate the table; NOT a pile - a pile may hold the deck and can be maniped by the user
class Deck{
    public:
        Deck(std::vector<Card> card_deck);
        virtual ~Deck();

        std::vector<Card> getDeck();
        std::string to_string();
        
    protected:
        std::vector<Card> _card_deck {};
};