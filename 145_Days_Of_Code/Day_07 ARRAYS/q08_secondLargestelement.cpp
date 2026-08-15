#include<iostream>
using namespace std;
int main(){
     int n ;
     cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx = arr[0];
    for(int i=1; i<n; i++){
       mx = max(mx,arr[i]);
    }
    int smx = -1;
    for(int i=1; i<n; i++){
       if(arr[i]!= mx) smx = max(arr[i], smx);
    }
    cout<<smx;
}