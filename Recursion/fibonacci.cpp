//Fibonacci Number

#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if(n <= 1) {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

int main() {

    int x;
    cout << "Enter any Number: ";
    cin >> x;

    int fibonacci = fibo(x);
    cout << fibonacci;

    return 0;
}