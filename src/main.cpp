#include "card.h"
#include "deck.h"

int main(){

    std::vector<Card> deck {};
    int num_rank{13};
    int num_suit{4};

    for(int i = 0; i < num_suit; i++)
    {
        for(int j = 0; j < num_rank; j++)
        {
            Card next_card = Card(static_cast<Card::Rank>(j + 1), static_cast<Card::Suit>(i+1));
            deck.push_back(next_card);
        }
    }

    Deck cardDeck = Deck(deck);

    std::cout << cardDeck.to_string();

    return 0;
}