//Reverse number

#include<bits/stdc++.h>
using namespace std;

int reverseIt(int n) {

    int reverseNum = 0;

    if(n < 0) {
        while(n < 0) {
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n = n / 10;
        }
    }

    while(n > 0) {
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n = n / 10;
    }

    return reverseNum;

}
 
int main() {

    int x;
    cout << "Enter Number to reverse it: ";
    cin >> x;

    int reverseNum = reverseIt(x);

    cout << reverseNum;

    return 0;
}