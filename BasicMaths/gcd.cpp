//GCD (Greatest common divisor)

#include<bits/stdc++.h>
using namespace std;

int gcds(int a,int b) {
    int gcd = 1;
    int divisor = 1;
    int minVal = min(a,b);

    while (divisor <= minVal){
        if((a % divisor) == 0 && (b % divisor) == 0) {
            gcd = divisor;
        }
        divisor++;
    }

    return gcd;
    

}

int main() {

    int x,y;
    cout << "Enter two number to find their GCD: ";
    cin >> x >> y;

    int gcd = gcds(x,y);

    cout << gcd;

    return 0;
}