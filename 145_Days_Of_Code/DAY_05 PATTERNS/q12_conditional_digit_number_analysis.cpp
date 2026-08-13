#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    int u = n;
    int nums = n;
    // number of digits
    int num = 0;
    while(n>0){
        n /= 10;
        num++;

    }
    cout<<num<<endl;
    // sum of digits
    int sum = 0;
    for(int i=1; i<=num; i++){
        int ld = u%10;
        sum += ld;
        u /= 10;



    }
    cout<<sum<<endl;
    // even or odd check
    if(nums % 2 == 0) cout<<"the num is even"<<endl;
    else cout<<"the num is odd"<<endl;
    // divisible by 5 and 3
    if(nums % 15 == 0) cout<<"the num is divisible by 5 and 3";
    else cout<<"the num is not divisible by 5 and 3";

}