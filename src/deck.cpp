#include "deck.h"
#include "token.h"

Deck::Deck(std::vector<Card> card_deck) : _card_deck(card_deck) {}
Deck::~Deck() = default;

std::vector<Card> Deck::getDeck()
{
    return _card_deck;
}

std::string Deck::to_string()
{
    std::string output {};

    for (int i = 0; i < _card_deck.size(); i++)
    {
        output.append(_card_deck[i].getName() + "\n");
    }
    return output;
}