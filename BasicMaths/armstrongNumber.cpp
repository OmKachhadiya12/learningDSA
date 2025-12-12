//Armstrong number

#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n) {
    int originalNum = n;
    int armstrongNum = 0;

    int digits = 0;
    int temp = n;

    while (temp>0){
        digits++;
        temp = temp / 10;
    }
    

    while (n>0) {
        int digit = n % 10;
        armstrongNum = armstrongNum + pow(digit,digits);
        n = n / 10;
    }

    if(originalNum == armstrongNum) {
        return true;
    } else {
        return false;
    }
    
}

int main() {

    int x;
    cout << "Enter number to check it's a Armstrong Number or not: ";
    cin >> x;

    int isArmstrong = armstrong(x);

    cout << isArmstrong;


    return 0;
}