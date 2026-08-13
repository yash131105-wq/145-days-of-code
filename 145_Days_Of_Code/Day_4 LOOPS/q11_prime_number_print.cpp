#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    for(int i=2; i<=a; i++){
        bool flag = true; // flag ko har round me update karna jaroori hai maine yeh galti kari thi 
        for( int j=2; j*j<=i; j++ ){ // maine flag ko for loop ke bahar initialize kiya tha toh har round ke baad wo update nhi ho rha tha
            if(i==j) continue;        // isiliya jab 4 me flag false ho gya tab 5 ke liye jab hum for loop se bahar bhi aa gaye tab bhi flag false hi tha 
            if(i%j==0) {flag = false;  // isiliye false hone ke wajah se 5 print nhi ho paaya.
            break;}             // BAKI CODE POORA SAHI HAI

        }
        if(flag == true) cout<<i<<" ";
    }
}
        // inner for loop checks whether the particular i is composite or not agar number i composite hota hai
        // then flag ko false assign karke loop break kardo 
        //then new i jab start hoga then again flag ko true kardo.