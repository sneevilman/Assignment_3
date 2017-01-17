/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 14 Jan, 2017, 11:41 PM
 * Purpose: Convert year to Roman Numeral
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here

int main() {
    //Declare and process variables
    int yearIn,     //inputted year between 1000 and 3000
        mV,         //number of M's
        leftM,      //left over after 1000s are subtracted
        dV,         //number of D's
        leftD,       //left over after 500s are subtracted
        cV,         //number of C's
        leftC,      //left over after 100s
        lV,         //50s
        leftL,      //left over after 50s
        xV,         //10s
        leftX,      //left over after 10s
        vV,         //5s
        iV;         //1s
            
    char ans;
    bool restart;
         
    cout<<"This program converts the given year to Roman numerals."<<endl;
    
    do {

        cout<<"Please input a value from 1000 to 3000."<<endl;    
        cin>>yearIn;
        while (yearIn<1000 || yearIn>3000){
        cout<<"Input a value from 1000 to 3000."<<endl;
        cin>>yearIn;
        }
        mV = (yearIn-yearIn%1000)/1000;
        leftM = yearIn%1000;
        
        dV = (leftM - leftM%500)/500;
        leftD = yearIn%1000%500;
        
        cV = (leftD - leftD%100)/100;
        leftC = yearIn%1000%500%100;
        
        lV = (leftC - leftC%50)/50;
        leftL = yearIn%1000%500%100%50;
        
        xV = (leftL - leftL%10)/10;
        leftX = yearIn%1000%500%100%50%10;
        
        vV = (leftX - leftX%5)/5;
        iV = yearIn%1000%500%100%50%10%5;
        
//        cout<<"M: "<<mV<<endl;
//        cout<<"D: "<<dV<<endl;
//        cout<<"C: "<<cV<<endl;
//        cout<<"L: "<<lV<<endl;
//        cout<<"X: "<<xV<<endl;
//        cout<<"V: "<<vV<<endl;
//        cout<<"I: "<<iV<<endl;

        
        
        do {
            if (mV>0){
            mV -=1;
            cout<<"M";}
        } while(mV>0);
        
        
        if(cV == 4 && dV == 1){
            cV = 0;
            cout<<"CM";} else if (cV == 4){
                cV = 0;
                cout<<"CD";} else if (dV == 1){
                    cout<<"D";}
         do {
            if(cV>0){
            cV -=1;
            cout<<"C";}
        } while(cV>0);
        
        
        if(xV == 4 && lV == 1){
            xV = 0;
            cout<<"XC";} else if (xV == 4){
                xV = 0;
                cout<<"XL";} else if (lV == 1){
                    cout<<"L";
                }
        do {
            if(xV>0){
            xV -=1;
            cout<<"X";}
        } while (xV>0);
        
        
        if(iV == 4 && vV == 1){
            iV = 0;
            cout<<"IX";} else if (iV == 4){
                iV = 0;
                cout<<"IV";} else if (vV == 1){
                    cout<<"V";
                    }
        do {
            if(iV>0){
            iV -=1;
            cout<<"I";}
        } while (iV>0);        
        
        
        
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

