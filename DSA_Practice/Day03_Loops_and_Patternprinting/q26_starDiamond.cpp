#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int mid = n/2 + 1;
	int nsp = 1; 
	int nst = n-2; 
	for(int i=1; i<=n; i++) {
		if(i<=mid) {
			for(int j=1; j<=mid-i; j++) {
				// printing spaces
				cout<<" ";
			} // printing stars
			for(int k=1; k<=2*i-1; k++) cout<<"*";
		}

		// cout<<endl;
		if(i>=mid + 1) {
			for(int k=1; k<=nsp; k++) {
				cout<<" ";
			}
			nsp++;
			for(int m=1; m<=nst; m++) {
				cout<<"*";
			}
			nst-=2;
		}
		cout<<endl;
	}
}

// another method of solving this 
/* int n;
cin>>n;
int mid = n/2 + 1;
int nsp = n/2;
int nst = 1;
for(int i=1; i<=n; i++){
for(int j=1; j<=nsp; j++) cout<<" "; // for spaces
for(int k=1; k<=nst; k++) cout<<"*";} // for stars
if(i<ml){ nsp--;
nst += 2;}
else {nsp++;
nst--;}
cout<<"\n";
*/