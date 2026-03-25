#include<iostream>
using namespace std;

bool isPalindrome(int number){
    if(number<0){
        return false;
    }
    int original = number;

    int rev_num = 0;
    while(number>0){
        int rem = number%10;
        number/=10;
        rev_num = rev_num*10 + rem;
    }
    if(original == rev_num){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int number;
    cout<<"Enter the number to check palindrome: ";
    cin>>number;
    if(isPalindrome(number)){
        cout<<"Yes Palindrome."<<endl;
    }
    else{
        cout<<"No, not palindrome."<<endl;
    }

    return 0;
}