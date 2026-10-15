#include <iostream>
using namespace std;
int main() {
       float area,radius,length,base,width,height;
       int choice;
       const float PI = 3.141;
       
       cout << "Geometrical Area Menu:" << endl;
       cout << "1. Circle" << endl;
       cout << "2. Rectangle" << endl;
       cout << "3. Triangle" << endl;
       
       cout << "Enter your choice (1-3): ";
       cin >> choice;
       
       if(choice==1){
       cout <<"Enter the radius:";
       cin >> radius;
       area = PI * radius * radius;
       cout<<"Area of a circle ="<<area;
       }else if(choice==2){
       cout <<"Enter the length:";
       cin >> length;
       cout <<"Enter the width:";
       cin >> width;
       area = width * length;
       cout<<"Area of a rectangle ="<<area;
       }else if(choice==3){
       cout <<"Enter the base:";
       cin >> base;
       cout <<"Enter the height:";
       cin >> height;
       area = height * base * 0.5;
       cout<<"Area of a triangle ="<<area;
       }else{
       cout<<"invalid choice";
       }
       
       return 0;
       
       }
       