#include<iostream>
using namespace std;

void myfunc(int a,int b){
    int temp ;
    a = temp;
    temp = b;
    b = a;

}

int main(){
    int p = 9;
    int q = 11;
    cout<<p<<" "<<q<<endl;
    myfunc(p,q);
    cout<<p<<" "<<q<<endl;

    return 0;
}