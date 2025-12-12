//Divisors

#include<bits/stdc++.h>
using namespace std;

void divisor(int n){
    int divisors = 1;
    while (divisors<=n){
        if(n % divisors == 0) {
            cout << divisors << endl;;
        }
        divisors++;
    }
     
}

int main() {

    int x;
    cout << "Enter number to check it's a Armstrong Number or not: ";
    cin >> x;
    divisor(x);

    return 0;
}