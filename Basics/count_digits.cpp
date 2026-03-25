#include<iostream>
using namespace std;

int get_count(int number){
    int count = 0;
    while(number>0){
        number/=10;
        count++;
        
    }
    return count;
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int count = get_count(number);
    cout<<count<<endl;

    return 0;
}