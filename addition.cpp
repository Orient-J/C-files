#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
//#include<conio.h>

using namespace std;

int main(){

     float number1,number2;
     char sign;

     cout<<"Enter the first number : ";
     cin >>number1;

     cout<<"Enter the second number : ";
     cin >>number2;

     cout<<"Choose a sign to do operation (+,-,*,/,%) : ";
     cin >>sign;

     switch(sign){

         case '+':
             cout<<"Addition result is "<<number1 + number2<<endl;
             break;

         case '-':
             cout<<"Substraction result is "<<number1 - number2<<endl;
             break;

         case '*':
             cout<<"Multiplication result is "<<number1 * number2<<endl;
             break;

         case '/':
             cout<<"Division result is "<<number1 / number2<<endl;
             break;


         case '%':
             cout<<"Modulus result is "<<(int)number1 % (int)number2<<endl;
             break;

         default :
             cout<<"Please enter only numbers and specific characters.";
     }


    return 0;
}