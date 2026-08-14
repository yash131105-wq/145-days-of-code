#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    int ld;
    int sum = 0;
    int j = 0;  // ORIGINAL VARIABLE SAVE KARNE KI AADAT BNA LO BRO KAAM AAYEGA IN DSA IN ARRAYS ETC
    int y = n; // n ko y me store kiya bcz y/=10 karne ke baad y eventually zero ho jayega
    int u = n; // issliye n ko kisi new variable me store kar liya 
    while(n>0){  // to calculate the no. of digits in the input
        n = n/10;
        j++;

    }
    for(int i=1; i<=j; i++){     
        ld = y%10;  // ld to store the last digit of the input
        int x = 1;  // x to store the factorial of the last digit
        for(int k=1; k<=ld; k++){  // factorial function calculator
            x *= k;
        }
        sum += x; // add the fact of the last digit and store in the sum variable 
        y /= 10;  // use to remove the last digit and making the 2nd last digit as the new last digit

    }
    if(sum == u) cout<<"This number is a strong number"; // also yahan humne directly n nhi likha kynki wo badal chuka hai to 0 in line 13
    else cout<<"No the number is not a strong number";
    
}