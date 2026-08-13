#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value: ";
    cin>>a;
    cout<<a<<endl; // original value as input frm the user
    cout<<a++<<endl; // same value printed as above but the value is inc by 1 (pre_increment)
    cout<<a<<endl; // printed increment value
    cout<<a--<<endl; // printed the same valuea as above and decreased by 1 (pre_decrement)
    cout<<a<<endl;
}