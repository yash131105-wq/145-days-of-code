#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    for(int i=a/2; i>=2; i--){
        if(a % i == 0) cout<<i;
            break;
    }
}