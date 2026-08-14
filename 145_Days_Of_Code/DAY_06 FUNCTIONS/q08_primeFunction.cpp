#include<iostream>
using namespace std;
bool isPrime(int x){
    bool flag = true;
    for(int i=2;i*i<=x; i++ ){
        if(x%i==0) {return flag = false;
            break;} // yahan break; keyword ki jaroorat hi nhi hai 
            // kyunki return hone ke baad already func ka khatma ho jata hai
    
        
       
    }
    return flag;
    

   
}
    
    
int main(){
   int a ;
   cin>>a;
   if(a==1) {cout<<"Invalid input"; 
    return 0;}
   bool flag = isPrime(a);
   if(flag == true) cout<<"The num is PRIME";
   else cout<<"The num is COMPOSITE";
}