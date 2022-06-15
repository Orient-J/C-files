#include<iostream>
using namespace std;

int main(){

        int number;

        cout<<"Enter a Number :: ";
        cin >> number;

        cout<<(number < 5 && number > 0)<<endl;
        cout<<(number < 5 || number < 8 )<<endl;
        cout<< !(number <  5 || number < 8 )<<endl;

    return 0;
}