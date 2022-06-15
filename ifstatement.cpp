#include<iostream>
using namespace std;

int main(){

    int number;

    cout<<"Enter a Number :: ";
    cin >>number;

    if( number <= 10 ){

        cout<<"The number you enterd is less than or equal to 10";

    }else if( number > 10 && number <= 25 ){

        cout<<"The number you entered is greter than 10 and less than or equal to 25";

    }else if( number > 25 && number <= 50 ){

        cout<<"The number you entered is greater than 25 and less than or equal to 50";

    }else{

        cout<<"The number you entered is greater than 50";
    };


    return 0;
}