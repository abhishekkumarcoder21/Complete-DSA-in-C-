#include<iostream>
using namespace std;

int find_fact(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num*find_fact(num - 1);
}

int main(){
    int num;
    cout<<"Enter number to find its factorial: ";
    cin>>num;
    int ans = find_fact(num);
    cout<<ans<<endl;

    return 0;
}