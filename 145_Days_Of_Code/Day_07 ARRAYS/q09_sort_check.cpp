#include<iostream>
using namespace std;
int main(){
     int n ;
     cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag = true; // true means sorted
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag == false) cout<<"The array is not sorted";
    else cout<<"The array is sorted";
}