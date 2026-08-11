#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your marks: ";
    cin>>a;
    if(a>=90 and a<=100) cout<<"A";
    else if(a>=80) cout<<"B";
    else if(a>=70) cout<<"C";
    else cout<<"FAIL";
}