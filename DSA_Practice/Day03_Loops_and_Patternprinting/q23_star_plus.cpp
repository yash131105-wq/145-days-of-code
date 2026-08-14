#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mid = n/2 ;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            if(i==mid || j==mid) cout<<" * ";
            else cout<<"   ";
        } cout<<endl;
}
}