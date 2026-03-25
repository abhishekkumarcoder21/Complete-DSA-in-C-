#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;

    vector<int> small;
    vector<int> large;

    for(int i = 1; i<=sqrt(number);i++){
       
        if(number%i==0){
            small.push_back(i);
            if(i!=(number/i)){
                large.push_back(number/i);
            }
        }

        
    }
    for(int i = 0;i<small.size();i++){
        cout<<small[i]<<" ";
    }
    for(int i = large.size() - 1;i >= 0;i--){
        cout<<large[i]<<" ";
    }
  

    return 0;
}