#include<iostream>
#include<iomanip>

using namespace std;

int main(){


        float number , result;

        cout<< "Please enter a number :: " ;
        cin  >> number;

        int column , row ;

        char comma;

        cout<< "Please enter columns and rows [ 10,20 ] :: ";
        cin  >> column >> comma >> row;

        int time;

        time = 1;

        int finalstate = column * row;

        while( time <= finalstate){

            result = number * time;

            

            // if( time % 10 == 0 )
            //     cout<< "\n" << endl ;

                // if you use condition here , in result , before number * time , you will get endline ;

            cout << setiosflags(ios::left) << setw(8) << result ;

            if( time % 10 == 0)
                cout << "\n" << endl;

              time++;

        }

    return 0;
}