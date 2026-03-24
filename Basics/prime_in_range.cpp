#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int number){
    if(number == 0 || number == 1){
        return false;
    }
    for(int i = 2; i<=sqrt(number) ; i++){
        if(number%i == 0){
             return false;
        }
    }
    return true;
}

int main(){
    int start,end;
    cout<<"Enter the range: ";
    cin>>start>>end;
    for(int i = start ; i <= end ; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}