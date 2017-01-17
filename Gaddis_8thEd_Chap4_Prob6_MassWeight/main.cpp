/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 16 Jan, 2017, 3:10 PM
 * Purpose: Compare the areas of rectangles
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
    short   l1,
            w1,
            l2,
            w2,
            a1,
            a2;
    //Process/Calculations Here
    cout<<"This program compares the areas of two rectangles given the \n"
            "length and width of said rectangles."<<endl;
    
    do {

        cout<<"Input the length of the first rectangle."<<endl;
        cin>>l1;
        cout<<"Input the width of the first rectangle."<<endl;
        cin>>w1;
        cout<<"Input the length of the second rectangle."<<endl;
        cin>>l2;
        cout<<"Input the width of the second rectangle."<<endl;
        cin>>w2;
        
        a1=l1*w1;
        a2=l2*w2;
        cout<<endl;
        
        if (a1>a2) {
            cout<<"Rectangle 1 is bigger."<<endl;
        } else if (a1==a2){
            cout<<"Both rectangles are the same size."<<endl;
        } else {
            cout<<"Rectangle 2 is bigger."<<endl;
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

