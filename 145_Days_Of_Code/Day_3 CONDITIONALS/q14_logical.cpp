#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     bool flag;
     cin>>a>>b>>c;
     if(a > b && a > c) flag = true;
     else if (a > b || a > c) flag = false;
     if (flag = true) cout<<"True";
    else cout<<"False";
}