#include<iostream>
using namespace std;
bool isPrime(int x){
    bool flag = true;
    for(int i=2;i*i<=x; i++ ){
        if(x%i==0) return flag = false;
    }
     return flag;    
}
void print(int b){
    for(int i=1; i<=b; i++){
        if(isPrime(i)==true) cout<<i<<" ";
        else continue;
    }
}
int main(){
    int a;
    cin>>a;
    print(a);
}