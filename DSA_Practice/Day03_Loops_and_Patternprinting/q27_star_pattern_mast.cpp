#include<iostream>
using namespace std;
int main(){
    int q;
    int n;
    int nst =  n;
    cout<<"Enter the input: ";
    cin>>q;
    n = q-1;
    for(int w=1; w<=n*2+1;w++ ) cout<<"*";
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++)
       { cout<<"*";  // stars
    }    
    for(int k=1; k<=2*i-1; k++){
        cout<<" ";  // spaces
    }
     for(int j=1; j<=n-i+1; j++)
       { cout<<"*";  // stars
    }   
     cout<<"\n";   
} 
 
}
