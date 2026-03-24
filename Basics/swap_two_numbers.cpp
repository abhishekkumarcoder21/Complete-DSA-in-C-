#include<iostream>
using namespace std;
int main(){
    int a = 99;
    int b = 100;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}