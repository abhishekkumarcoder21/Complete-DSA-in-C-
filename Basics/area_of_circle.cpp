#include<iostream>
#define PI 3.14
using namespace std;

float get_area_circle(float radius){
    float area = PI*radius*radius;
    return area;
}

int main(){
    float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float area = get_area_circle(radius);
    cout<<"The area of circle with radius "<<radius<<" is : "<<area<<endl;
    return 0;
}