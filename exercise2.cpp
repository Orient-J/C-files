#include<iostream>
using namespace std;

int main(){


    float gallonsperacubicfoot = 7.481;

    float givengallon;

    cout<<"Give value of gallon : ";
    cin >>givengallon;

    float cubicfeetingivengallon = givengallon / gallonsperacubicfoot;

    cout<<"Cubic equivalant to "<<givengallon<<" gallon is "<<cubicfeetingivengallon<<" cubic feet. "<<endl;


    return 0;
}