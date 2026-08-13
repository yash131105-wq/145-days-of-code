#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 3;

    cout << a++ << endl;
    cout << ++a << endl;
    cout << b-- << endl;
    cout << --b << endl;

    int result = a + b * 2;

    cout << result << endl;

    return 0;
}   /*
a++ prints current value, then increments.
++a increments first, then prints.

Multiplication has higher precedence than addition,
so b * 2 is evaluated before a + ...
    */