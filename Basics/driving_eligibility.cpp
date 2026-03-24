#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<18 && age>0){
        cout<<"not eligible"<<endl;
    }
    else if(age>=18 && age<=60){
        cout<<"You can drive"<<endl;
    }
    else if(age>60 && age<=100){
        cout<<"You are old, so not eligible."<<endl;
    }
    else{
        cout<<"invalid age."<<endl;
    }
    return 0;
}