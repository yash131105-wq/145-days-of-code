#include <iostream>
using namespace std;
#include<cmath>


int main()
{
	int n;
	cin>>n;
	int u = n;
	int j = 0;
	int m = n;
	int ld;
	int r;
	int sum = 0;
	while(n > 0) {
		n /= 10;
		j++;
	}
	for(int i=1; i<=j ; i++) {
		ld = u%10;
		r = ld*(pow(10,j-i));
		sum += r; // sum stores the reverse number of the input
		u /= 10;

	}
	cout<<n<<endl<<u<<endl<<m; // pehle main sum == n kar rha tha but n is already turned 0 fir main sum == u kiya but it's also turned 0
	cout<<endl;   // isi liye maine ek naya variable m banaya to store the input then compared sum == m and this time i got the ans
	if( sum == m) cout<<"Yes! The number is Palindrome";
	else cout<<"NO the number is not a palindrome";


	return 0;
}



