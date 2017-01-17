/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 14, 2017, 12:36 PM
 * Purpose: Solve Quadratic Function
 */

//System Libraries Here
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here

int main() {
    //Declare and process variables
    float a,  //ax^2
          b,  //bx
          c,  //constant
          x1,
          x2;  
    char ans;
    bool restart,
         complex,
         oneRoot;
    
   
    do {
        complex = false;

        cout<<"This program solves quadratic equations ax^2+bx+c=0"<<endl;
        cout<<"Input a value for a."<<endl;
        cin>>a;
        cout<<"Input a value for b."<<endl;
        cin>>b;
        cout<<"Input a value for c."<<endl;
        cin>>c;
        
        if ((b*b-4*a*c)==0){
            oneRoot = true;
        } else if ((b*b-4*a*c)>0) {
            oneRoot = false;
        } else {
            complex = true;
        }
        
        x1 = (-b + (sqrt(b*b-4*a*c)))/(2*a);
        x2 = (-b - (sqrt(b*b-4*a*c)))/(2*a);
        
        if (oneRoot == true){
            cout<<"The root is "<<x1<<endl;
        } else if(complex == true) {
            cout<<"The roots are complex"<<endl;
            cout<<"The first root is "<<
                    -b/(2*a)<<" + sqrt("<<-(b*b-4*a*c)<<")i/2a"<<endl;
            cout<<"The second root is "<<
                    -b/(2*a)<<"  sqrt("<<-(b*b-4*a*c)<<")i/2a"<<endl;
            cout<<"The second root is "<<x2<<endl;
        } else {
            cout<<"The first root is "<<x1<<endl;
            cout<<"The second root is "<<x2<<endl;
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

