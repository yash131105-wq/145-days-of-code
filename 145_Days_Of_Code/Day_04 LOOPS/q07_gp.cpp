#include<iostream>
using namespace std;
int main(){
    int a,r;
    cout<<"Enter the first num: ";
    cin>>a;
    cout<<"Enter the common ratio: ";
    cin>>r;
    for(int i=1; i<=10; i++){
       
        cout<<a<<" ";
         a *= r;


    }
}