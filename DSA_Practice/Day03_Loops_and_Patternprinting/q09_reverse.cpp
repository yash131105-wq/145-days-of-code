#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    int r = 0;
   
    while(n!=0){
        int ld = n%10;
        r += ld;
        r *= 10;
        n /= 10;}
        cout<<r;
        
  
}
    




    
