#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    bool flag = true;
    for(int i=2; i*i<=a; i++){
        if( a % i == 0) flag = false;
        break;
    }
    if(!flag) cout<<"The number is composite"; //!falg means flag false hai
    else cout<<"NO the number is not composite";


}