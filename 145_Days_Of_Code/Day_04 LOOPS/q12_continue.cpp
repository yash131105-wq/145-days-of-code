#include<iostream>
using namespace std;
int main(){
    int a = 20;
    // cout<<"Enter the number: ";
    // cin>>a;
    for(int i=1; i<=a; i++){
        if(i==3 || i==8) continue;
        else cout<<i<<" ";
    }
}