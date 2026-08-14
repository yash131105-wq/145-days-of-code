#include<iostream>
using namespace std;
bool flags (int x){
    if(x % 2 == 0) return true;
    else return false;
}
int main(){
    int a ;
    cout<<"Enter the input: ";
    cin>>a;
    flags(a); // now isko store karne ke liye ek naya variable initialize karna hoga
    bool flag = flags(a);
    if(flag == true) cout<<"EVEN"; // ya humog directly if(flags(a)==true) bhi likh sakte the
    else cout<<"ODD";
    
    
    
}