#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=26; i++){
       cout<<(char)(i+64)<<" ";
    } 
    cout<<endl;
    for(int i=0; i<26; i++){
       cout<<(char)('A'+ i )<<" ";
    } 
    cout<<endl;
}