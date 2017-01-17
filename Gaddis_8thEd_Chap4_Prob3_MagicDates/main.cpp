/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 16 Jan, 2017, 2:55 PM 
 * Purpose: find the magic date
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
    short day,
          month,
          year;
    
    cout<<"This program determines whether a given date is magic."<<endl;
    //Process/Calculations Here
    do {

        cout<<"Enter the day of the month."<<endl;
        cin>>day;
        cout<<"Enter the month of the year."<<endl;
        cin>>month;
        cout<<"Enter the year in two-digit format (i.e., '1960' = '60')."<<endl;
        cin>>year;
        
        cout<<endl<<day<<"/"<<month<<"/"<<year<<endl;
        
        if(year == day*month){
            cout<<"This is a magic date!"<<endl;
        } else {
            cout<<"This date is not magic..."<<endl;
        }
        
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

