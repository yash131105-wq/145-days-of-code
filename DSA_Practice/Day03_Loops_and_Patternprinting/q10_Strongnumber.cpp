#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    int ld;
    int sum = 0;
    int j = 0;
    int y = n; // n ko y me store kiya bcz y/=10 karne ke baad y eventually zero ho jayega
    int u = n; // issliye n ko kisi new variable me store kar liya 
    while(n>0){
        n = n/10;
        j++;

    }
    for(int i=1; i<=j; i++){     // ORIGINAL VARIABLE SAVE KARNE KI AADAT BNA LO BRO KAAM AAYEGA IN DSA IN ARRAYS ETC
        ld = y%10;
        int x = 1;
        for(int k=1; k<=ld; k++){
            x *= k;
        }
        sum += x;
        y /= 10;

    }
    if(sum == u) cout<<"This number is a strong number"; // also yahan humne directly n nhi likha kynki wo badal chuka hai to 0 in line 13
    else cout<<"No the number is not a strong number";
    
}