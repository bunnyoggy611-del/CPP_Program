#include <iostream>
#include <iomanip>
using namespace std;
int main(){
           double a,b,c,x,x1,x2;
           
           cout<<"Enter the coefficient:";
           cin>>a>>b>>c;
           
           if(a==0){
           cout <<"Error";
           return 0;
           }
           
           double disc = b * b - 4 * a * c;
           
           if(disc == 0){
           x = -b / 2 * a;
           cout<<"One Real solution=" << x << endl;
           }else if(disc > 0){
           x1 = (-b + sqrt(disc)) / 2 * a;
           x2 = (-b - sqrt(disc)) / 2 * a;
           cout<<"Two Real solution's:" << "x1=" << x1 << " and" << " x2=" << x2 << endl;
           }else{
           cout<<"No real solution";
           }
           
           return 0;
      }
           
         
           
           
           
           
           
           
           
           
           
           
           
           
              