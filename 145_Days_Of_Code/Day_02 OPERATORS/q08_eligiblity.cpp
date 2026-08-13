#include<iostream>
using namespace std;
int main(){
     int a;
     bool flag;
    cout<<"Enter the age: ";
    cin>>a;
    cout<<"Enter the hasID: ";
    cin>>flag;
    if(a >= 18 and flag == true ) cout<<"Yes you are Elegible";
    else cout<<"No you are not Eligible";
}