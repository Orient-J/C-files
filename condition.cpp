#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
//#include<conio.h>

using namespace std;

int main(){

    int num;

    cout<<"Enter a number :: ";
    cin >>num;

    num > 5 ? cout<<"the number is "<<num : cout<<"the number is less than 5";


    return 0;
}