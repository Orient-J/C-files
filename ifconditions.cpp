#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
//#include<conio.h>

using namespace std;

int main(){

    int mark1;

    char comma;

    cout<<"Please enter mark1,mark2,mark3 :: ";
    cin >>mark1;

    if(mark1 >= 80 ) {

        cout << "Grade-A";

    }else if(mark1 >= 60) {
        if (mark1 <= 79)
            cout << "Grade-B";
    }else{

        cout<<"Grade-C";
    }

    return 0;
}