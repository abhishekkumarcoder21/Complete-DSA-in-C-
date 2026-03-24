#include<iostream>
using namespace std;
int main(){
    int num,idx;
    cout<<"Enter the number and index upto which you want to print the table: ";
    cin>>num>>idx;

    for(int i = 1;i<=idx;i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}