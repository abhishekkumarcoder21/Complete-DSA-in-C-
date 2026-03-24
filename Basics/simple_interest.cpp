#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the principle: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;
    float SI = (p*r*t)/100;
    cout<<"The SI is : "<<SI<<endl;
    cout<<"The amount is : "<<p+SI<<endl;
    return 0;
}