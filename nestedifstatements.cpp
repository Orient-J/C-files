#include<iostream>

using namespace std;

int main(){


    int number;

    cout<< "Enter a Number less than or equal to 50 :: ";
    cin >> number ;

    if( number <= 50 ){

        if( number < 50 && number >= 25 ){

            cout<< "the number is between 49 and 25 ";

        }else if( number < 25 && number >= 10){

            cout<< "the number is between 24 and 10 ";

        }else if( number < 10 && number > 0 ){

            cout<< "the number is between 9 and 1 ";

        }else if( number < 0 || number == 0 ){

            cout<< "the number is 0 or less than 0";

        }else{

            cout<< "the number is 50 ";

        }

    }else

        cout<< "the number is over 50 ";


    return 0;
}