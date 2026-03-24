#include<iostream>
using namespace std;
float get_perimeter_sq(float side){
    float perimeter = 4*side;
    return perimeter;
}
int main(){
    float side;
    cout<<"Enter the side of the square: ";
    cin>>side;
    float perimeter = get_perimeter_sq(side);
    cout<<"The perimeter of square with side "<<side<<" is : "<<perimeter<<endl;
    return 0;
}