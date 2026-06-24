// Power of 4 or Not.

#include<bits/stdc++.h>
using namespace std;

 bool isPowerOfFour(int n) {
        if( n > 0 && (n & (n - 1)) == 0) {
            int pos = 1;
            while(n > 1) {
                n = n >> 1;
                pos++;
            }
            return n % 2 == 1;
        }

        return false; 
    }

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    bool ans = isPowerOfFour(n);

    cout << "ans: " << ans;
}