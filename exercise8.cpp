#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float dollar;
    char dollarsign = 36;

    cout<<"Please Enter dollar you want ::  ";
    cin >>dollar;

    float dollarperapound = 1.487,
          dollarperafrance = 0.172,
          dollarperadeutschemask = 0.584,
          dollarperayen = 0.00955;

    cout<<setfill('_')<<setw(38)<<setiosflags(ios::left)<<"British Pound equivalent to "<<dollarsign<<setw(15)<<dollar<<dollar/dollarperapound<<" pound"<<endl;
    cout<<setw(38)<<"French france equivalent to "<<dollarsign<<setw(15)<<dollar<<dollar/dollarperafrance<<" france"<<endl;
    cout<<setw(38)<<"German deutschemask equivalent to "<<dollarsign<<setw(15)<<dollar<<dollar/dollarperadeutschemask<<" deutschemask"<<endl;
    cout<<setw(38)<<"Japanese yen equivalent to "<<dollarsign<<setw(15)<<dollar<<dollar/dollarperayen<<" yen"<<endl;


    return 0;
}