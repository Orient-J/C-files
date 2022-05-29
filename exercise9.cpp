#include<iostream>
#include<iomanip>
//#include<conio.h>
#include<ctype.h>
using namespace std;

int main(){

    int num1,num2,num3,num4;
    char sign1,sign2;

    cout<<"Please enter numbers for first fraction :: ";
    cin >>num1>>sign1>>num2;

    cout<<"Please enter numbers for second fraction :: ";
    cin >>num3>>sign2>>num4;

    float nominator = (num1 * num4) + (num3 * num2);

    float denominator = num2 * num4;

    cout<<"The result of "<<num1<<sign1<<num2<<" + "<<num3<<sign2<<num4<<" == "<<nominator<<sign1<<denominator;


    return 0;
}