// Check if the i-th bit is Set or Not.

#include<bits/stdc++.h>
using namespace std;

bool setOrNot(int a,int b) {
   if (a & (1 << b)){
    return true;
   } else {
    return false;
   }  
}

int main() {
    int a , b;

    cout << "Enter the number and index to check: ";
    cin >> a >> b;

    bool ans = setOrNot(a,b);

    cout << "ans: " << ans;
}