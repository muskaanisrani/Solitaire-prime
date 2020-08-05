//Muskan Israni
//017537908
//CECS 282 LAB 2
//02/11/20
#include "Card.h"
#include "Deck.h"
#include <iostream>
using namespace std;

int menu(){
        std::cout << "Welcome to Solitaire Prime!\n 1) New Deck\n 2) Display Deck\n 3) Shuffle Deck\n 4) Play Solitaire Prime\n 5) Exit\n";
    int userchoice;
    cin>>userchoice;
    return userchoice;
}


    bool primeornot(int num) {
        if (num==1||num==0) {
            return false;
        }
        for (int i=2;i<num-1;i++) {
            if (num%i==0) {
                return false;
                
            }
        }
        return true;
    }

int main(int argc, const char * argv[]) {
    Deck deck;
    int userchoice=0;
    
    while (userchoice!=5) {
        userchoice=menu();
    if (userchoice==1) {
        deck.refreshDeck();
        deck.showDeck();
    }
    else if
        (userchoice==2){
        deck.showDeck(); }
        
    else if
             (userchoice==3){
                deck.shuffle();
                 deck.showDeck();}
        
    else if
                    (userchoice==4) {
                        cout<<"Playing solitaire prime!!!";
                        int sum=0;
                        int primecount=0;
                        for (int i=0;i<52;i++) {
                            Card ob=deck.deal();
                            ob.showCard();
                            cout<<" ";
                            int value=ob.getValue();
                            sum=sum+value;
                            bool prime=primeornot(sum);
                            if (prime==true) {
                                cout<<"Prime:"<<sum<<endl;
                                sum=0;
                                primecount++;
                                int cardsleft=deck.cardsLeft();
                                if (cardsleft==0) {
                                    cout<<"Winner in "<<primecount<<" piles";
                                }
                            }
                               }
                        bool notprime=primeornot(sum);
                        if(notprime==false) {
                            cout<<"Loser"<<endl;
                        }
                        
                        
                    } else if
                        (userchoice==5) {
                            cout<<"goodbye!";
                        
                            
                        
                    }
        
                }
    
    
    return 0;
    
}
