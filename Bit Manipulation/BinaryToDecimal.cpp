// Binary to Decimal

#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(string n) {
   
    int length = n.length() - 1;
    int result = 0;
    int i = 0;

    while (length >= 0){
        result += (n[length] - '0') * pow(2,i);
        i++;
        length--;
    }
    
    return result;
    
}

int main() {
    string n;
    
    cout << "Enter the Binary to convert into the Decimal: ";
    cin >> n;
    
    int ans = BinaryToDecimal(n);

    cout << ans;
}