//Factorial

#include<bits/stdc++.h>
using namespace std;

int fac(int n) {
    if(n==1) {
        return 1;
    }
    return n * fac(n-1);
}

int main() {

    int x;
    cout << "Enter number to find it's factorial: ";
    cin >> x;

    int factorial = fac(x);
    cout << factorial;

    return 0;
}