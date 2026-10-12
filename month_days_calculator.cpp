#include <iostream>
#include <iomanip>
using namespace std;
int main(){
           int year,month;
           
           cout<<"Enter the year:";
           cin>>year;
           cout<<"Enter the month(1-12):";
           cin>>month;
           
           switch(month)
           {
           case 1:
           cout << "January " << year << " has 31 days";
           break;
           
           case 2:
           if((year%4==0) && (year%100!=0) || (year%400==0)){
           cout << "February " << year << " has 29 days";
           }else{
           cout << "February " << year << " has 28 days";
           }
           break;
           
           case 3:
           cout << "March " << year << " has 31 days";
           break;
           
           case 4:
           cout << "April " << year << " has 30 days";
           break;
           
           case 5:
           cout << "May " << year << " has 31 days";
           break;
           
           case 6:
           cout <<"June " << year << " has 30 days";
           break;
           
           case 7:
           cout << "July " << year << " has 31 days";
           break;
           
           case 8:
           cout << "August " << year << " has 31 days";
           break;
           
           case 9:
           cout << "September " << year << " has 30 days";
           break;
           
           case 10:
           cout << "October " << year << " has 31 days";
           break;
           
           case 11:
           cout << "November " << year << " has 30 days";
           break;
           
           case 12:
           cout << "December " << year << " has 31 days";
           break;
           
           
           default:
           cout << "Invalid search ";
           break;
           
           }

           return 0;
      }
           
         
           
           
           
           
           
           
           
           
           
           
           
           
              