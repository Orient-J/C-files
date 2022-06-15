#include<iostream>

using namespace std;

int main(){


        int number ;

        cout<< "Enter a Number :: " ;
        cin >> number;

    // Single line


        if(number < 10)
                cout<<"The number you enter is "<< number << endl;


   // Multi Line Code

        if(number > 0 ){

            int result = number / 2;

            cout<< "the result is "<< result << endl ;

        }

    return 0;
};

