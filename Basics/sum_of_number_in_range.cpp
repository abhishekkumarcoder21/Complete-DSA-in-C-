#include<iostream>
using namespace std;
int main(){
    int start,end;
    int sum = 0;
    cout<<"Enter the range : ";
    cin>>start>>end;
    for(int i = start; i<=end; i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}