// Power of 2 or Not.

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0; 
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    bool ans = isPowerOfTwo(n);

    cout << "ans: " << ans;
}