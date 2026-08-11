#include<iostream>
using namespace std;
int main(){
     int a;
    cout<<"Enter the year: ";
    cin>>a;
    if(a % 400 == 0 || (a % 4 == 0 and a % 100 != 0)) cout<<"It's a leap year";
    else cout<<"It's not a leap year";
}