#include<iostream>
using namespace std;
float get_perimeter_rect(float length, float width){
    float perimeter = 2*(length + width);
    return perimeter;
}
int main(){
    float length,width;
    cout<<"Enter the length and width of the rectangle: ";
    cin>>length>>width;
    float perimeter = get_perimeter_rect(length,width);
    cout<<"The perimeter of rectangle with length "<<length<<" and width "<<width<<" is "<<perimeter<<endl;
    return 0;
}