// Count the digits

#include<bits/stdc++.h>
using namespace std;

int count(int n) {

    //Fatest method 
    // int count = (int)(log10(n) + 1);

    int count = 0;

    while (n > 0){
        int digit = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

int main() {

    int x;
    cout << "Enter Digit to count how many digit's have: ";
    cin >> x;

    int totalDigit = count(x);
    cout << totalDigit;

    return 0;
}