/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 16 Jan, 2017, 3:20 PM
 * Purpose: Calculate and compare weight
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
    short   mass,
            gravity=9.8,
            weight;
    //Process/Calculations Here
    cout<<"This program calculates the weight of an object based on the mass\n"
            "and determines if it is too heavy or too light."<<endl;
    
    do {

        cout<<"Input the mass of the object in kilograms."<<endl;
        cin>>mass;
        
        weight = mass*gravity;
        
        cout<<"The weight is "<<weight<<"N."<<endl;
        
        if (weight>1000){
            cout<<"The object is too heavy."<<endl;
        } else if (weight<10){
            cout<<"The object is too light."<<endl;
        } else {
            cout<<"The object is just right."<<endl;
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

