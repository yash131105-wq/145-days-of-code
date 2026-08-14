#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the input: ";
    cin>>a;
    int count = 0;
    while(a!=0){
        count++;
        a /= 10;
    }
    cout<<count;
}