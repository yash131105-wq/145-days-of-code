#include<iostream>
using namespace std;
int main(){
     int a,b;
     cout<<"Enter the marks: ";
     cin>>a;
     cout<<"Enter the family income: ";
     cin>>b;
     if(a >= 90 and b <= 500000) cout<<"Scholarship Granted";
     else cout<<"Scholarship Not Granted";
}