// Count Good Numbers

#include<bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long myPow(long long num,long long n) {
    long long ans = 1;

    while (n){
        if(n % 2) {
            ans = (ans * num) % MOD;
            n = n - 1;
        } else {
            num = (num * num) % MOD;
            n = n / 2;
        }
    }

    return ans;
    
}

int countGoodNumbers(long long n) {
    long long even = (n + 1) / 2;
    long long odd = n / 2;

    long long ans = ( myPow(5,even) * myPow(4,odd) ) % MOD;

    return ans;
}

int main() {

    return 0;
}