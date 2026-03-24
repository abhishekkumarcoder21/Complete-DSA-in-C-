#include<iostream>
#define PI 3.14
using namespace std;


float get_perimeter_circle(float radius){
    float perimeter = 2*PI*radius;
    return perimeter;
}

int main(){
    float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float perimeter = get_perimeter_circle(radius);
    cout<<"The perimter of the circle with radius "<<radius<<" is "<<perimeter<<endl;

    return 0;
}