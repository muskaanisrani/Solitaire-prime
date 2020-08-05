//
//  Deck.cpp
//  Prog 1- Solitaire prime
//
//  Created by Muskaan Israni on 2/11/20.
//  Copyright © 2020 Muskaan Israni. All rights reserved.
//
#include "Card.h"
#include "Deck.h"
#include <iostream>
using namespace std;


    Deck::Deck(){
        int temp=0;
        top=0;
        char suit[4]={'S','H','D','C'};
        char ranks[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
        for (int i=0;i<4;i++) {
            for (int j=0;j<13;j++) {
                storage[temp].setCard(ranks[j],suit[i]);
                temp++;
            }
        }
        
    }
    void Deck::refreshDeck(){
        int temp=0;
        top=0;
        char suit[4]={'S','H','D','C'};
        char ranks[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
        for (int i=0;i<4;i++) {
            for (int j=0;j<13;j++) {
                storage[temp].setCard(ranks[j],suit[i]);
                temp++;
            }
        }
        
    }
    
    Card Deck::  deal() {
        Card temp=storage[top];
        top++;
        return temp;
    }
    void Deck::shuffle(){
        srand(time(0));
        for (int i=0;i<500;i++) {
            int x=rand()%52;
            int y=rand()%52;
            Card temp=storage[x];
            storage[x]=storage[y];
            storage[y]=temp;
        }
        
        
        
    }
    int Deck:: cardsLeft(){
        int cardsleft=52-top;
        return cardsleft;
    }
    
    void Deck::showDeck(){
        int temp=0;
        for (int j=0;j<4;j++) {
            for (int k=0;k<13;k++) {
                storage[temp].showCard();
                cout<<" ";
                temp++;
            }
            cout<<"\n";
        }
        
    }
    
