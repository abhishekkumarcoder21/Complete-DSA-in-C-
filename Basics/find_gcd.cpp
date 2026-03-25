#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(){
    int num1,num2;
    cout<<"Enter two number to find their gcd: ";
    cin>>num1>>num2;

    int ans = gcd(num1,num2);
    cout<<ans;

    return 0;
}