#include<iostream>
using namespace std;
int do_reverse(int number){
    int sign = 1;
    if(number<0){
        sign = -1;
        number = -number;
    }
    int rev_num = 0;

    while(number>0){
        int rem = number % 10;
        number /= 10;
        rev_num = rev_num*10 + rem;
    }
    
    return sign*rev_num;
}
int main(){
    int number;
    cout<<"Enter the number to reverse it: ";
    cin>>number;
    int rev = do_reverse(number);
    cout<<rev<<endl;
    return 0;
}