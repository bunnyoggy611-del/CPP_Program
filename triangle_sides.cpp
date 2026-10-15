#include <iostream>
using namespace std;
int main() {
       float a, b, c;
       cout << "Enter three sides of the triangle: ";
       cin >> a >> b >> c;
       
       if(a==b && b==c){
         cout<<"The triangle is equilateral.";
       }else if(a==b || b==c || c==a){
         cout<<"The triangle is Isosceles.";
       }else{
         cout<<"The triangle is Isosceles.";
       }
       return 0;
       
       }
       