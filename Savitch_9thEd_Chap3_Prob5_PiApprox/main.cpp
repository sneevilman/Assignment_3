/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 16 Jan, 2017, 12:01 AM 
 * Purpose: Approimate Pi
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here

int main() {
    //Declare and process variables
    float pi,
          sN,
          num;
    char ans;
    bool restart;

    //Process/Calculations Here
        cout<<"This program calculates pi using an infinite series with n"
                " number of terms.\n The greater the value of n,"
                "the more accurate the pi output will be."<<endl;
        
    do {
        pi = 0;

        cout<<"Enter a value for n."<<endl;
        cin>>num;
        if (num>0){
        do{
            sN = (pow((-1),(float)(num))/(2*num+1));
            pi += sN;
            num -=1;
        } while(num>-1);
    }
        
        pi*=4;
        cout<<fixed<<setprecision(20);
        cout<<"Pi approx. = "<<pi<<endl;
        
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

