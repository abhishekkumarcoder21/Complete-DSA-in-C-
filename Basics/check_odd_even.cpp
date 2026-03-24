#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number to check if it is even or odd: ";
    cin>>number;
    if(number%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}