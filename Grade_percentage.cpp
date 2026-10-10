#include <iostream>
using namespace std;
int main(){
           float obtained;
           int total;
           double p;
          
          cout <<"enter total marks:";
          cin>>total;
          cout <<"enter obtained marks:";
          cin>>obtained;
          
          p=obtained/total*100.0;
          cout<<"Percentage="<<p<<endl;
          
          if(p>=80){
          cout<<"Grade A+";
          } else if(p>=70){
          cout<<"Grade A";
          } else if(p>=60){
          cout<<"Grade B";
          } else if(p>=50){
          cout<<"Grade C";
          }else if(p>=40){
          cout<<"Grade D";
          }else if(p>=33){
          cout<<"Grade E";
          }else{
          cout<<"Grade F";
          }
           
           
           return 0;
           }
           
         
           
           
           
           
           
           
           
           
           
           
           
           
              