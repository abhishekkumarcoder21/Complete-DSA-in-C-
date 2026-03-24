#include<iostream>
using namespace std;
int getsum(int num1,int num2){
    int sum = num1+num2;
    return sum;
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers to add: ";
    cin>>num1>>num2;
    int sum = getsum(num1,num2);
    cout<<"The sum of "<<num1<<" and "<<num2<<" is : "<<sum;
    return 0;
}