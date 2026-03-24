#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    if(num == 0 || num == 1){
        return false;
    }
    for(int i = 2;i<=sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;

}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(isPrime(number)){
        cout<<number<<" is prime"<<endl;
    }
    else{ 
        cout<<number<<" is not prime"<<endl;
    }
    return 0;
}