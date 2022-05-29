#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // 11

    char character  = 120;  // character x to decimal 120
    string name     = "Jim";
    int number      = 509;

    cout<<  character   <<endl
        <<  name        <<endl
        <<  number      <<endl;

    // 12

    cout<<setw(10)<<"george";

    cout<<endl;

    // 15

    string strnum = "Enter a number : ";
    string strtext = "The number you entered is ";
    int temp;

//    cout<<strnum;
//    cin >>temp;
//    cout<<strtext<<temp;

    cout<<"\n";

    //18

    short int charnum = 97 ;

    cout<<charnum<<endl;

    cout<<11%3<<endl;

    temp +=  23;

    temp = temp + 23 ;

    cout<<"The answer is "<<temp;

    cout<<"\n";

    int var1 = 20;

    cout<<var1--<<endl;
    cout<<++var1<<endl;

    return 0;
}