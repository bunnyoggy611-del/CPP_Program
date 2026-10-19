#include <iostream>
using namespace std;
int main() {

       int n,sumeven,sumodd;
       sumeven = 0;
       sumodd = 0;
       
       cout <<"Enter the number:";
       cin >> n;
       
       while(n >= 0){
            if(n % 2 == 0)
            sumeven = sumeven + n;
            else
            sumodd = sumodd + n;
            n--;
       }
       cout <<"Sum of even number:" << sumeven << endl;
       cout <<"Sum of odd number:" << sumodd << endl;
       
       return 0;
       }
       
    