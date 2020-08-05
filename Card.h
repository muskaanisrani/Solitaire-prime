//
//  Card.hpp
//  Prog 1- Solitaire prime
//
//  Created by Muskaan Israni on 2/11/20.
//  Copyright © 2020 Muskaan Israni. All rights reserved.
//
#include <iostream>
using namespace std;
#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>

#include <iostream>
using namespace std;
#include <stdlib.h>
class Card{
private:
    char suit;
    char rank;
    
public:
    Card();
    Card(char r,char s);
    void setCard(char r,char s);
    
    int getValue();
    
    void showCard();
    
};
#endif /* Card_hpp */
