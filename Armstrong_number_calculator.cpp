#include <iostream>
using namespace std;
int main() {

       int num,sum = 0,r,n;
       
       cout <<"Enter a number:";
       cin >> num;
       n = num;
       while(n != 0){
            r = n % 10;
            sum = sum + (r * r * r);
            n /= 10;
       }
       if(sum == num){
          cout<< num << " is an Armstrong number";
       }else{
          cout<< num << " is not an Armstrong number";
       }
       return 0;
       }
       
    