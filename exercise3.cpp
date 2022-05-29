#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int year = 1990;

    cout<<setw(5)<<year<<setw(10)<<135<<endl
        <<setw(5)<<++year<<setw(10)<<7290<<endl
        <<setw(5)<<++year<<setw(10)<<11300<<endl
        <<setw(5)<<++year<<setw(10)<<16200<<endl;

    return 0;
};