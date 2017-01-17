/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 16 January, 2017, 3:32 PM
 * Purpose: Calculate time from seconds
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here

int main() {
    //Declare and process variables
    char ans;
    bool restart;
    unsigned int seconds;
    short minutes,
            hours,
            days;
            
    cout<<"This program converts seconds to days/hours/minutes."<<endl;
    
    //Process/Calculations Here
    do {

        cout<<"Input a number of seconds."<<endl;
        cin>>seconds;
        
        days = (seconds - seconds%86400)/86400;
        seconds -= days*86400;
        hours = (seconds - seconds%3600)/3600;
        seconds -= hours*3600;
        minutes = (seconds - seconds%60)/60;
        seconds -= minutes*60;
        
        cout<<"Days: "<<days;
        cout<<"  Hours: "<<hours;
        cout<<"  Minutes: "<<minutes;
        cout<<"  Seconds: "<<seconds<<endl;
        
        
        
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

