#include<iostream>
using namespace std;

float get_area_rect(float length, float width){
    float area = length*width;
    return area;
}

int main(){
    float length,width;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;
    float area = get_area_rect(length,width);
    cout<<"The area of rectangle with length "<<length<<" and width "<<width<<" is : "<<area<<endl;
    return 0;
}