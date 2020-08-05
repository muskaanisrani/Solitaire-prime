//Muskan Israni
//017537908
//CECS 282 LAB 2
//02/11/20
//  Card.cpp
//  Prog 1- Solitaire prime
//
//  Created by Muskaan Israni on 2/11/20.
//  Copyright © 2020 Muskaan Israni. All rights reserved.
//
#include "Card.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
    

    Card::Card(){
        
    }
    Card::Card(char r,char s) {
        suit=s;
        rank=r;
    }
    void Card::setCard(char r,char s){
        suit=s;
        rank=r;
        
    }
    int Card:: getValue(){
        if (rank=='A'){
            return 1;
        } else {
            if (rank>='2' && rank<='9') {
                return rank-48;
            } else {
                if (rank=='J'||rank=='Q'||rank=='K'||rank=='T') {
                    return 10;
                } else {
                    return 7;
                }
            }
        }
    }
    void Card:: showCard(){
        if (rank=='T'){
            cout<<"10"<<suit;
        } else {
          cout<<rank<<suit;
        }
    }

