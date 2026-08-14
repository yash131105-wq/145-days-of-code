#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            // printing spaces
            cout<<" ";
        } // printing stars
        int m = 1;
        for(int k=1; k<=2*i-1; k++) { cout<<(char) (m + 64) ;
            m++;}
        cout<<endl;}
    }
