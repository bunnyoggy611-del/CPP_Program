#include <iostream>
using namespace std;
int main() {

       long int n,f = 1,count = 1;
       
       cout << "Enter the number:";
       cin >> n;
       
       while(count <= n){
          f = f * count;
          count++;
       
       }
       cout <<"The factorial of " << n << " is " << f;
       
       return 0;
       
       }
       