#include<iostream>
using namespace std;

int main(){
    float side1,side2,side3;
    cout<<"Enter the three sides of the triangle: ";
    cin>>side1>>side2>>side3;
    float perimeter = side1+side2+side3;
    cout<<"The perimter of the triangle is : "<<perimeter<<endl;
    return 0;
};