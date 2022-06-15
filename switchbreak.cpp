#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
//#include<conio.h>

using namespace std;

int main(){

    char vowel;

    cout<<"Please enter only a vowel :: ";
    cin >>vowel;

    string text = " is a vowel.";

    switch(vowel){

        case 'a':
            cout<<vowel<<text;
        break;


        default :
            cout<<vowel<<" is not a vowel.";
        break; // default need no break cause default is the last one and after this , there is not code to run;

        case 'e':
            cout<<vowel<<text;
        // if there is not break , the program carry over but not stopping;

    }


    return 0;
}