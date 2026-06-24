// Count the Set Bits.

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int a) {
    int count = 0;

    while (a != 0){
        a = a & (a - 1);
        count++;
    }

    return count;
    
}

int main() {
    int a , b;

    cout << "Enter the number and index to check: ";
    cin >> a;

    int ans = countSetBits(a);

    cout << "ans: " << ans;
}