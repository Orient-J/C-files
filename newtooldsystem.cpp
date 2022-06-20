#include<iostream>

using namespace std;

int main(){

    float decimalpound , pound , toshelling , shelling , topence , pence , oldsystem ;

    cout << "Enter Decimal Pounds :: " ;
    cin   >> decimalpound ;

    pound = static_cast<int>(decimalpound);

    toshelling = decimalpound - pound ;

    toshelling = toshelling * 20 ;

    shelling = static_cast<int>(toshelling);

    topence = toshelling - shelling;

    topence = topence * 12 ;

    pence = static_cast<int>(topence);

    cout<< "Equivalent in old notation = \x9c" << pound << "." << shelling << "." << pence << endl;

    cout<<pound<<shelling<<pence;

    return 0;
}