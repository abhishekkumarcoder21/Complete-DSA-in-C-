#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int count = (int)(log10(number) + 1 );
    cout<<count<<endl;
    return 0;
}