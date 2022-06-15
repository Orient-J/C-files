#include<iostream>
#include<iomanip>

//#include<conio.h>

using namespace std;

int main(){

    int row;
    int count;

    count = 5;

    for(row = 0 ; row < count ; row++){

        int space;
        int star;

        for( space = count-1 ; space > row ; space-- ){

            cout<<" ";

        }

        for( star = 0 ; star <= row ; star++ ){

            cout<<"* ";

        }

        cout<<endl;

    }


    return 0;
}