#include<iostream>
using namespace std;

int power(int base, int exp){
    int result = 1;
    for(int i = 0;i<exp;i++){
        result*=base;
    }
    return result;
}


bool isArmstrong(int number){
    if(number == 0){
        return true;
    }
    int temp = number;
    int count = 0;

    if(temp == 0){
        count = 1;
    }

    while(temp>0){
        temp/=10;
        count++;
    }

    int sum = 0;
    temp = number;

    while(temp>0){
        int rem = temp%10;
        temp/=10;
        sum+=power(rem,count);
    }
    return (sum == number);

}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    if(isArmstrong(number)){
        cout<<"Yes Armstrong"<<endl;
    }
    else{
        cout<<"No, not Armstrong"<<endl;
    }

    return 0;
}