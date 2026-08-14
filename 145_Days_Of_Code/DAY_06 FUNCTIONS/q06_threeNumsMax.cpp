#include<iostream>
using namespace std;
int _max(int x, int y , int z){
    if(x>y and x>z) return x;
    else if (y>x and y>z) return y;
    else return z;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"The maximum of these nums are: "<<_max(a,b,c);
    
}