/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 13 Jan, 2017
 * Purpose: Calculate cost of long-distance call
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here

int main() {
    //Declare and process variables
    
    short   sTime,      //time the call starts
            cTime;      //the length of the call in minutes
    char    wkDay,      //day of the week
            ans;
    float   cost,       //cost of the call in $
            rate;       //charge rate in $/min
    bool    time1,      //between 8am and 6pm
            time2,      //between 6pm and 8am
            restart;
    
    cout<<"This program calculates the price of a long-distance call."<<endl;
    
    do {
        cout<<"Please input the day of the week on which the call took place\n"
                "as Su, Mo, Tu, We, Th, Fr, or Sa."<<endl;
        cin>>wkDay;
        cin.ignore(500, '\n');      //ignores arbitrary number of character 
        cout<<endl;                 //inputs following initial input
        
        cout<<"What time did the call start? Input in military time."<<endl;
        cin>>sTime;
        cin.ignore(3); //ignores ':xx,' since only the hour is relevant
        cout<<"How long was the call in minutes?"<<endl;
        cin>>cTime;
        
        
        //Process calculations
        if (wkDay == 's' || wkDay == 'S'){
            rate = .15;
        }
        else if (sTime <18 && sTime >=8) {
            rate = .40;
        } else {
            rate = .25;
        }
        
        cost = rate*cTime;
        
        
        //output
        cout<<fixed<<setprecision(2)
                <<"The cost of the call is $"<<cost<<"."<<endl;
               
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

