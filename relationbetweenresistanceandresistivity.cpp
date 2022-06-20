#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){


            int serialnum = 1;

            cout << setiosflags(ios ::  left ) 
                    << setw(25) << "Serial Number" << setw(35) << "Name" << endl
                    << setw(25) << 1 << setw(35) << "Resistance" << endl
                    << setw(25) << 2 << setw(35) << "Resistivity" << endl
                    << setw(25) << 3 << setw(35) << "Length" << endl
                    << setw(25) << 4 << setw(35) << "Area" << endl 
                    << setw(25) << 5 << setw(35) << "Radius" << endl
                    << setw(25) << 6 << setw(35) << "Diameter" << endl;

                        // cout << " Choose one to find according to serial number :: ";
                        // cin   >> serialnum;

            if( serialnum > 0 && serialnum <= 6 ){

                    double resistance, resistivity, length, area, radius, diameter;

                    const double PI = 3.14;

                    char choice ;
                    
                        choice = 'y'; 

                    while( choice == 'y' ){

                        cout << " Choose one to find according to serial number :: ";
                        cin   >> serialnum;

                        switch( serialnum ){

                            case 1:

                                    cout<< "Finding Resistance " << endl ;

                                    cout<< "Enter resistivity value of a metal :: ";
                                    cin  >> resistivity;

                                    cout<< "Enter length value of a metal :: ";
                                    cin  >> length;

                                    cout<< "Is there area [ y / n  ] ::  ";
                                    cin  >> choice;

                                        if( choice == 'n' ){
                                            
                                            

                                            cout<< " Enter radius :: ";
                                            cin  >> radius;

                                            area = PI * radius * radius ;

                                        }else{

                                            cout<< "Enter area :: ";
                                            cin  >> area;
                                        }
                                    
                                    

                                    resistance = resistivity * ( length / area );  

                                    cout<< " The Resistance is " << resistance;

                                    
                            break;

                            // case 2:
                            // break;

                            // case 3:
                            // break;

                            // case 4:
                            // break;

                            // case 5:
                            // break;

                            default :

                                    cout<< "Enter Resistance :: ";
                                    cin   >> resistance;

                                    cout<< "Enter Resistivity :: ";
                                    cin  >> resistivity; 

                                    cout<< "Enter Length :: ";
                                    cin  >> length ;

                                    diameter = sqrt( (4  * resistivity * length ) / ( resistance * PI ) ) ;

                                    cout<< "The Result of Diameter is " << diameter << endl;

                        }

                        cout<<"Do you want to run another [ y / n ] :: ";
                        cin   >> choice ;

                    }

                }else{

                cout << "Please enter choose serial number included ... ";

            }


    return 0;
}
