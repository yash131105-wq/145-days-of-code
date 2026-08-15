#include<iostream>
using namespace std;
int main(){
     int n ;
     cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
        int j = n-1;
        int i = 0;
        while(j>=i){
            swap(arr[j--], arr[i++]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}