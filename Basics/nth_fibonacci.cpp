#include<iostream>
using namespace std;

int find_fib(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    return (find_fib(num-1)+find_fib(num-2));
}

int main(){
    int num;
    cout<<"Enter the position to get the fibonacci number: ";
    cin>>num;
    int ans = find_fib(num);
    cout<<ans;

    return 0;
}