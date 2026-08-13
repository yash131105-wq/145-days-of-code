#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int x = n%10;
        sum += x;
        n /= 10;

    }
    cout<<sum;
}