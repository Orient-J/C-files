#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
//#include<conio.h> // for some compiler ( eg. turbo C++)

using namespace std;

int main(){

    double mass1,mass2;
    double distance;
    const double constantg = 6.67e-11;
    double gravitationalforce ;

    cout<<"Enter Two masses (eg. 1 2 ) :: ";
    cin >>mass1>>mass2;

    cout<<endl;

    cout<<"Enter distance between two masses :: ";
    cin >>distance;

    cout<<endl;

    gravitationalforce = ( constantg * mass1 * mass2 )/( distance * distance );

    cout<<"Gravitational Force = "<<gravitationalforce<<" N"<<endl;

    return 0;
}
