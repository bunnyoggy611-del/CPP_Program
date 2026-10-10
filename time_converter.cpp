#include <iostream>
#include <iomanip>
using namespace std;
int main(){
           int hours,minutes;
           char colon;
           
           cout <<"Enter Milatry time(hh:mm):";
           cin >> hours >> colon >> minutes;
           
           if(hours==0){
           cout <<"Standard time=" << "12" << colon << setw(2) << setfill('0') << minutes <<"AM" <<endl;
           }else if(hours==12){
           cout <<"Standard time=" << "12" << colon << setw(2) << setfill('0') << minutes <<"PM" <<endl;
           }else if(hours > 12){
           cout <<"Standard time=" << hours - 12 << colon << setw(2) << setfill('0')  << minutes <<"PM" <<endl;
           }else{
           cout <<"Standard time=" << hours << colon  << setw(2) << setfill('0') << minutes <<"AM" <<endl;
           }
           return 0;
           }
           
         
           
           
           
           
           
           
           
           
           
           
           
           
              