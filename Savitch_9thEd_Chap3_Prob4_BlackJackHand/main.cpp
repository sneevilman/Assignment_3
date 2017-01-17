/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 15 Jan, 2017, 9:43 PM
 * Purpose: Score Blackjack Hand
 */

//System Libraries Here
#include <iostream>
#include <string>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here

int main() {
    //Declare and process variables
    short nHand,        //number of cards in hand
          score,        //total score of blackjack hand
          cardN,        //card # for console output
          aces;         //number of aces
    char crdType,
         ans;
    bool restart;
    cout<<"This program scores a blackjack hand."<<endl;

    //Process/Calculations Here
    do {
        
        cardN=0;
        aces=0;
        score=0;
        
        cout<<"How many cards are in your hand? (Answer 2-5)"<<endl;
        cin>>nHand;
        while (nHand<2||nHand>5){
            cout<<"Please input a number of cards from 2 to 5."<<endl;
            cin>>nHand;
        }
        do {
            cardN +=1;
            nHand -=1;
            cout<<"What is the value of card #"<<cardN<<"? (input 1-9, or "
                    "'Ten' for 10)"<<endl;
            cin>>crdType;
            cin.ignore(256,'\n');
             if (crdType == 'k' || crdType == 'K' || crdType == 'q' ||
                crdType == 'Q' || crdType == 'j' || crdType == 'J'
             || crdType == 't' || crdType == 'T'){score+=10;}
             else if (crdType == 'a' || crdType == 'A'){aces +=1;}
             else {score += crdType-48;}
            } while(nHand>0);

            if (aces>0){
                do{
                    aces -=1;
                    if(score+11>21) {score+=1;}
                    else {score+=11;}
                } while (aces>0);
            }
                    
        cout<<endl;
        switch(score>21){
            case true:cout<<"Busted!";break;
            default: switch(score==21){
                case true:cout<<"Blackjack!";break;
                default: switch(16<score && score<21){
                    case true:cout<<"Close! ";break;
                    default:cout<<"Too low. ";
                }
            }
        }
        cout<<endl;
        cout<<"Your score is "<<score<<endl;
        
        cout << endl;
        cout << "Would you like to run this program again? y/n" << endl;
        cin>>ans;
        while (ans != 'y' && ans != 'n' && ans != 'Y' && ans != 'N') {
            cout << "Please enter y/n" << endl;
            cin>>ans;
        }
        if (ans == 'y' || ans == 'Y')
            restart = true;
        else
            restart = false;
    } while (restart);

    //Output Located Here

    //Exit
    return 0;
}

