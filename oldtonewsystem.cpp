#include<iostream>

using namespace std;

int main(){

    float pound,shelling,pence,topence,decimalpound;

    cout<< "Enter Pounds :: ";
    cin  >> pound ;

    cout<< "Enter Shellings :: ";
    cin  >> shelling;

    cout<< "Enter Pences :: ";
    cin  >> pence;

    
    topence = ( pound * 240 ) + ( shelling * 12 ) +  pence ;

    decimalpound = topence / 240 ;

    cout<< "Decimal Pounds =  " << decimalpound << endl ;


    return 0;
}