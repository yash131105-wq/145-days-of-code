#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    bool flag = true;
    int i = n;
    while(flag == true){
        if(i%7==0 and i%13==0) {cout<<i;
        break;}
         i++;
    }

    }
