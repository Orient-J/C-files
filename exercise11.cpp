#include<iostream>
//#include<conio.h>
#include<iomanip>
#include<cmath>
#include<ctype.h>

using namespace std;

int main(){

    float decimalpound,pound,shelling,pence;

    cout<<"Enter Decimal Pound :: ";
    cin >>decimalpound;

//    cout<<static_cast<int>(decimalpound)<<endl;

//    cout<<decimalpound - static_cast<int>(decimalpound)<<endl;

//    cout<<( decimalpound - static_cast<int>(decimalpound) ) * 20<<endl;

//    cout<<static_cast<int>( ( decimalpound - static_cast<int>(decimalpound) ) * 20 )<<endl;

//    cout<<( decimalpound - static_cast<int>(decimalpound) ) * 20 - static_cast<int>( ( decimalpound - static_cast<int>(decimalpound) ) * 20 ) <<endl;

//    cout<<( ( decimalpound - static_cast<int>(decimalpound) ) * 20 - static_cast<int>( ( decimalpound - static_cast<int>(decimalpound) ) * 20 ) ) * 8<<endl;


    pound = static_cast<int>(decimalpound);

    // end of pound

    float decfrac = decimalpound - pound;

    decfrac = decfrac * 20 ;

    shelling = static_cast<int>(decfrac);

    // end of shelling

    pence =( decfrac - shelling );

    float addition = shelling + pence;

//    cout<<"Equivalent in old notation :: "<<pound<<"."<<shellling<<endl;

    cout<<pound<<"."<<addition;


    return 0;
}