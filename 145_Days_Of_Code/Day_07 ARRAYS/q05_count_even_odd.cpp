#include<iostream>
using namespace std;
int main(){
     int n ;
     cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int even = 0;
    int odd = 0;
    for(int i=0; i<n; i++){
       
        if(arr[i] % 2 == 0){
            even++;
        }
        
         if(arr[i] % 2 != 0){
            odd++;
        }
     
    }
    cout<<"Number of even elements: "<<even<<"\n";
    cout<<"Number of odd elements: "<<odd<<"\n";
}