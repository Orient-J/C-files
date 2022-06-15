#include<iostream>
#include<iomanip>
#include<cmath>
#include<ctype.h>
//#include<conio.h>

using namespace std;

int main(){

    int numb;


    cout<<"Please Choose Which Formula you use "<<endl
        <<setiosflags(ios::right)
        <<setfill('_')
        <<setw(10)<<"Serial no."<<setw(35)<<"Formula"<<endl<<endl
        <<setw(10)<<1<<setw(35)<<"Coloumb Force"<<endl
        <<setw(10)<<2<<setw(35)<<"Pythagorus"<<endl
        <<setw(10)<<3<<setw(35)<<"Electric Field"<<endl
        <<setw(10)<<4<<setw(35)<<"Area of a Circle"<<endl
        <<setw(10)<<5<<setw(35)<<"Gravitation Force"<<endl
        <<setw(10)<<6<<setw(35)<<"velocity without distance"<<endl
        <<setw(10)<<7<<setw(35)<<"distance without velocity"<<endl
        <<setw(10)<<8<<setw(35)<<"velocity without time"<<endl
        <<setw(10)<<9<<setw(35)<<"Electric Field with charge"<<endl
        <<setw(10)<<10<<setw(35)<<"Kinetic Energy"<<endl
        <<setw(10)<<11<<setw(35)<<"Current by charge"<<endl
        <<setw(10)<<12<<setw(35)<<"Total charge"<<endl
        <<setw(10)<<13<<setw(35)<<"Number of charge"<<endl
        <<setw(10)<<14<<setw(35)<<"Number of charge with current"<<endl
        <<setw(10)<<15<<setw(35)<<"Energy"<<endl
        <<setw(10)<<16<<setw(35)<<"Power"<<endl
        <<setw(10)<<16<<setw(35)<<"Current with Resistance"<<endl
        <<setw(10)<<17<<setw(35)<<"Resistance with Current"<<endl
        <<setw(10)<<18<<setw(35)<<"Voltage with current"<<endl
        <<setw(10)<<19<<setw(35)<<"Resistance included resistivity"<<endl
        <<setw(10)<<20<<setw(35)<<"Resistivity"<<endl;




    cout<<endl;

    cout<<"Enter serial no. = ";
    cin >>numb;


    float colconst ,
          graconst ,
          PI ,
          prochg ,
          elechg ,
          promass ,
          elemass ;

    colconst = 8.9876e9;
    graconst = 6.67e-11;
    PI = 3.142;
    prochg = 1.67e-19;
    elechg = 1.67e-19;
    promass = 1.6e-27;
    elemass = 9.11e-31;





    return 0;
}

