#include<iostream>
#include<iomanip>

using namespace std;

int main(){

        float fah , cel ;

        char choice = 'y';

        do{

            cout << setw(45) << "Type 1 to convert Fahrenheit to Celsius , " << endl
                    << setw(45) << "2 to convert Celsius to Fahrenheit : ";
            cin   >> choice ;

            if( choice == '1' ){

                cout << "Finding Celsius" << endl ;

                cout << "Enter temperature in Fahrenheit : ";
                cin   >> fah;

                cel = ( fah - 32 ) * 5 / 9 ;

                cout << "In Celsius that's " << cel << endl;

            }else if( choice == '2' ){
                
                cout << "Finding Fahrenheit" << endl ;

                cout << "Enter temperature in Celsius : ";
                cin   >> cel;

                fah = ( ( 9 * cel ) / 5  ) + 32 ;

                cout << "In Fahrenheit that's " << fah << endl;

            }else
                cout << "Please Don't Enter except 1 or 2... T_T " << endl ;

                cout << "Do you want to run again [ y / n ] :: " ;
                cin   >> choice ;

        }while( choice == 'y' );

    return 0;
}