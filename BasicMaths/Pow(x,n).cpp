// Pow(x, n)

#include<bits/stdc++.h>
using namespace std;

double myPow(double num,int n) {
    double ans = 1;
    long nn = n;

    if(n < 0) {
        nn = -1 * nn;
    }

    while (nn){
        if(nn % 2) {
            ans = ans * num;
            nn = nn - 1;
        } else {
            num = num * num;
            nn = nn / 2;
        }
    }

    if(n < 0) {
        return double(1.0) / ans;
    }

    return ans;
    
}

int main() {

    return 0;
}