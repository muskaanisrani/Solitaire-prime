//
//  Deck.hpp
//  Prog 1- Solitaire prime
//
//  Created by Muskaan Israni on 2/11/20.
//  Copyright © 2020 Muskaan Israni. All rights reserved.
//
#ifndef Deck_h
#define Deck_h
#include "Card.h"
#include <iostream>
using namespace std;


#include <stdio.h>


class Deck {
private:
    Card storage[52];
    int top;
    
public:
    Deck();
    
    void refreshDeck();
    
    Card deal();
    
    void shuffle();
    
    int cardsLeft();
    
    void showDeck();
    
};

#endif /* Deck_hpp */