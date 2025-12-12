//Prime Number

#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
    int i = 1;

    while(i<=n){
        if(n % i == 0) {
            return false;
        }
        i++;
    }
}

int main() {

    int x;
    cout << "Enter Number to check is tit Prime or Not: ";
    cin >> x;

    bool isPrime = prime(x);
    cout << isPrime;

    return 0;
}