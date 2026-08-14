#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<"Enter the selling price: ";
    cin>>sp;
    if(sp>cp) cout<<"profit of: "<< sp-cp;
    else if(cp>sp) cout<<"loss of: "<<cp-sp;
    else cout<<"No profit no loss";
}