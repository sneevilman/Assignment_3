/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 16 Jan, 2017, 2:45 PM
 * Purpose: Min/Max
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
    int num1,
        num2;

    //Process/Calculations Here
    do {

        cout<<"Enter a number."<<endl;
        cin>>num1;
        cout<<"Enter another number."<<endl;
        cin>>num2;
        
        if (num1>num2){
            cout<<num1<<">"<<num2<<endl;
        }
        else if (num1==num2){
            cout<<num1<<"="<<num2<<endl;
        }
        else {
            cout<<num1<<"<"<<num2<<endl;
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

