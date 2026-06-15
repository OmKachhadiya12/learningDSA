// Decimal to Binary

#include<bits/stdc++.h>
using namespace std;

string DecimalToBinary(int n) {

    if (n == 0) return "0";
    string result = "";

    while (n > 0) {
        if(n % 2 == 0) {
            result += '0';
        } else {
            result += '1';
        }
        n = n / 2;
    }

    reverse(result.begin(),result.end());

    return result;
    
}

int main() {
    int n;
    
    cout << "Enter the Number to convert into the Binary: ";
    cin >> n;
    
    string ans = DecimalToBinary(n);

    cout << ans;
}