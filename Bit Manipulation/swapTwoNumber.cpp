// Swap two number using the XOR operator.

#include<bits/stdc++.h>
using namespace std;

void swapNum(int &a,int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    return;
}

int main() {
    int a , b;

    cout << "Enter the two number: ";
    cin >> a >> b;

    swapNum(a,b);

    cout << "a: " << a;
    cout << "b: " << b;
}