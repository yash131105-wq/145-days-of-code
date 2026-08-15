#include<iostream>
using namespace std;
int main(){
     int n ;
     cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool flag;
    for(int i=0; i<n; i++){
        if(target == arr[i]){
            flag = true;
            break;
        }
        else flag = false;
    }
    if(flag == true) cout<<"The target is present in the array";
    else cout<<"The target is not present in the array";
}