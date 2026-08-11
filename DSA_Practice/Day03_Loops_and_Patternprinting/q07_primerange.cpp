#include <iostream>
using namespace std;

int main() {
    int L, R;
    cout << "Enter the first number: ";
    cin >> L;

    cout << "Enter the second number: ";
    cin >> R;

    for (int i = L; i <= R; i++) {

        // 0 aur 1 prime nahi hote
        if (i < 2)
            continue;

        bool isPrime = true;

        // Sirf sqrt(i) tak check karna hai
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;              // divisor mil gaya, aur check karne ki zarurat nahi
            }
        }

        if (!isPrime)
            continue;               // non-prime ko skip kar do

        cout << i << " ";
    }

    return 0;
}