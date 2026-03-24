#include<iostream>
using namespace std;

float get_area_triangle(float base, float height){
    float area = 0.5*base*height;
    return area;
}

int main(){
    float base, height;
    cout<<"Enter the base and height of the triangle: "<<endl;
    cin>>base>>height;
    float area = get_area_triangle(base,height);
    cout<<"the area of triangle with base "<<base<<" and height "<<height<<" is : "<<area<<endl;
    
    
    return 0;
}