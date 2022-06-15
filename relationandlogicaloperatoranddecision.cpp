#include<iostream>
//#include<conio.h>
#include<iomanip>
#include<cmath>
#include<ctype.h>

using namespace std;

int main(){

    int num1;

    cout<<"Enter a number :: ";
    cin >>num1;

    if( num1 > 50){

        cout<<" The number you entered "<<num1<<" is greater than 50 "<<endl;
    }else if( num1 < 5){

        cout<<" The number you entered "<<num1<<" is lower than 5 "<<endl;
    }else if( num1 == 15 ){

        int multiplier ;

        cout<<" Enter multiplier :: ";
        cin >>multiplier;

        int multiply = num1 * multiplier;

        cout<<" The number you entered "<<num1<<" is multiply by "<<multiplier<<" = "<<multiply<<endl;

    }else if( num1 >= 26 ){

        cout<<" The number you entered "<<num1<<" is equal to or greater than 26 "<<endl;

    }else if( num1 <= 19){

        cout<<" The number you entered "<<num1<<" is equal to or less than 19 "<<endl;

    }else{

        int max = 25 ,min = 20;

        if( num1 >= min && num1 <= max ){

            cout<<" The number you entered "<<num1<<" is between "<<min<<" and "<<max<<endl;

        }

    }




    return 0;
}