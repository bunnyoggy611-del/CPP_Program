#include <iostream>
using namespace std;
int main() {
      int n;
      cout<<"Enter the number:";
      cin>>n;
      
      if(n==0){
      cout<<"Even";
      return 0;
      }
      
      if(n>0){
        if(n%2==0){
        cout<<"Positive even";
        }else{
        cout<<"Positive odd";
        }
      }else if(n<0){
        if(n%2==0){
        cout<<"Negative even";
        }else{
        cout<<"Negative odd";
        }
      }else{
      cout<<"Error";
      }

return 0;
}