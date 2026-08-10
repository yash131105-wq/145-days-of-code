#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    bool flag;
    if (a % 2 == 0) flag = true;
    else flag = false;
    if (flag = true ) cout<<"even"<<endl;
    else cout<<"odd"<<endl;
    cout<<flag;
    
}