#include<iostream>

using namespace std; 

int main(){

    // int agearr ; // declare variable name for an array

    int agearr[4]; // declaring the size of an array , size = 4 ;

    // int              == array type 
    // agearr        == array name 
    // 4                == size of array 
    // []               == signature of an array 


    // get user input and assign values to arraies ;

    // standard loop for an array is " For Loop ";

    for( int init = 4 ; init >= 0 ; init--  ){

        cout<<"Enter an integer type input to assign an array :: ";

        cin >> agearr[init] ; // assigning values int array 

        // init is used as index here , 

        // Remark :: to get values from an array , must be included arrayname , [ ] , index number is important ; 
        
        cout << " \n Assigning " << agearr[init] << " into array index " << init << endl << endl ; // invoke array , need index number 

    }

    for( int init = 0 ; init < 5 ; init++){ // output array values with loop 

        cout << "Index " << init << " = " << agearr[init] << endl  ; // ouput array value according to array index 

    }


    // Instead of For Loop Try While Loop 


    // int init = 0 ;

    // char choice = 'y' ;

    // while( choice == 'y' ){

        
    //     cout << "Enter a number to assign into array " << init << " :: "  ;

    //     cin   >> agearr[init] ;

    //     cout << "You assign " << agearr[init] << " in index number " << init << endl ; 

    //     cout << "Do you want to assign another number :[ y / n ] ==>  ";

    //     cin   >> choice ; 

    //     if( choice == 'y' ){

    //         init++ ;

    //     }else{

    //         int start ; 

    //         while( start <= init ){

    //             cout << "For index " << start << " , value is " << agearr[start] << endl ; 

    //             start++ ;

    //         }
    //     }

    // }

    // cout << init << endl ;



    return 0 ;
}