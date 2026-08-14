#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool flag = true; // true means prime 
    for(int i=2;i<=sqrt(n);i++ ){
        if(n%i==0) flag = false;
        break;
    }
    if(flag==true) cout<<"The num is prime";
    else cout<<"The num is composite";
}