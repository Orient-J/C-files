#include<iostream>
#include<iomanip>
#include<ctype.h>
#include<cmath>
//#include<conio.h>

using namespace std;

int main(){

    double charge1,charge2;
    float distance;
    const double coloumbconstant = 8.987e9;
    char separater ;

    cout<<"Enter Two Charges ( eg. 1,2 ) :: ";
    cin >>charge1>>separater>>charge2;

    cout<<endl;

    cout<<"Enter distance between "<<charge1<<" C and "<<charge2<<" C :: " ;
    cin >>distance;

    cout<<endl;

    double electricForce = (coloumbconstant * charge1 * charge2) / (distance * distance);

    cout<<"The Electirc Force betweeen"<<charge1<<" C and "<<charge2<<" C = "<<electricForce<<" N"<<endl;


    return 0;
}


