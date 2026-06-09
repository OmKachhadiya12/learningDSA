//Prime Number

#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
    if(n <= 1) {
        return false;
    }

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;

}

int main() {

    int x;
    cout << "Enter Number to check is tit Prime or Not: ";
    cin >> x;

    bool isPrime = prime(x);
    cout << isPrime;

    return 0;
}