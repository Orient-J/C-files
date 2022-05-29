#include<iostream>
#include<iomanip>
using namespace std;

int main(){

cout    << setfill('.') << setiosflags(ios::left)
        << setw(15) << "Last Name" << setw(15) << "First Name" << setw(20) << "Street Address" << setw(15) << "Town" << setw(10) << "State" << endl << endl
        << setw(15) << "Janes"     << setw(15) << "Bernard"    << setw(20) << "109 Pine Lane"  << setw(15) << "Littletown" << setw(10) << "MI" << endl
        << setw(15) << "O' Brian"  << setw(15) << "Colean"     << setw(20) << "42 E. 99th Avew"<< setw(15) << "Bigcity"    << setw(10) << "NY" << endl
        << setw(15) << "Wong"      << setw(15) << "Harry"      << setw(20) << "121.A Alabama St"<< setw(15) << "Lakeville" << setw(10) << "IL" << endl;
    return 0;
}