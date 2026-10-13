#include <iostream>
using namespace std;

int main() {
    int days,total_charges;
    char type;
    
    cout<<" -MENU OF PARKING AREA- " << endl;
    cout<<"M = Motorcycle " << endl;
    cout<<"C = Car " << endl;
    cout<<"B = Bus " << endl;
    
    cout <<"Enter the type of vehicle:";
    cin>>type;
    cout <<"Enter the number of days to park the vehicle:";
    cin>>days;
    
    if(type =='M' || type =='m' ){
    total_charges = days * 10;
    cout << "The total charges of parking vehicle = " << total_charges;
    }else if (type =='C' || type =='c'){
    total_charges = days * 20;
    cout << "The total charges of parking vehicle = " << total_charges;
    }else if(type =='B' || type =='b'){
    total_charges = days * 30;
    cout << "The total charges of parking vehicle = " << total_charges;
    }else{
    cout << "Invalid type";
    }
    
    
    return 0;
}
    