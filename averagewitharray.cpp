#include<iostream>

using namespace std; 

int main(){


    int start = 0 , arrlength;  
    float  initial = 0 ;

    cout << "Enter size of the array :: "  ; 
    cin   >> arrlength ;

    int arr[arrlength] ;

    for( start ; start <= arrlength - 1 ; start++ ){

        cout << "Enter a number to assign :: " ;
        cin   >> arr[start] ;

        cout << "You assigned  " << arr[start] << " into " << "arr[" << start << "]" << endl ;

        initial += arr[start];


    }

        // cout<< "Initial = " << initial << endl ;


        float averageval = initial / arrlength ;

        cout << "The Average Value is " << averageval << endl ;


}