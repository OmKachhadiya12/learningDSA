//Reverse number

#include<bits/stdc++.h>
using namespace std;

int reverseIt(int n) {

    long reverseNum = 0;

        while (n != 0) {
            int digit = n % 10;
            reverseNum = reverseNum * 10 + digit;

            if (reverseNum > INT_MAX || reverseNum < INT_MIN) {
                return 0;
            }

            n /= 10;
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