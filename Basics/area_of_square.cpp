#include<iostream>
using namespace std;

float get_area_sq(float side){
    float area = side*side;
    return area;
}

int main(){
    float side;
    cout<<"Enter the side of the square: ";
    cin>>side;
    float area = get_area_sq(side);
    cout<<"The area of square with side"<<side<<" is : "<<area<<endl;

    return 0;
}