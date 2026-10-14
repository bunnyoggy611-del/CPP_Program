#include <iostream>
using namespace std;

int main() {
    float v,r;
    int choice;
    
    cout <<" _Conversation Menu_ " << endl;
    cout <<"1. Convert liter to gallons(1 liter = 0.264) " << endl;
    cout <<"2. Convert km to miles(1km = 0.622) " << endl;
    cout <<"3. Convert kg to pounds(1kg = 2.2) " << endl;
    cout <<"4. Convert cm to inches(1cm = 0.394) " << endl;
    
    cout <<"Enter your choice:";
    cin >> choice;
    
    if(choice == 1){
    cout <<"Enter your value:";
    cin >>v;
    r = v * 0.264;
    cout << v <<" liter = " << r <<" gallons ";
    }else if(choice == 2){
    cout <<"Enter your value:";
    cin >>v;
    r = v * 0.622;
    cout << v <<" km = " << r <<" miles ";
    }else if(choice == 3){
    cout <<"Enter your value:";
    cin >>v;
    r = v * 2.2;
    cout << v <<" kg = " << r << " pounds ";
    }else if(choice == 4){
    cout <<"Enter your value:";
    cin >>v;
    r = v * 0.394;
    cout << v << " cm = " << r << " inches ";
    }else{
    cout << "invalid choice";
    }   
    
      return 0;
}
    