#include<bits/stdc++.h>
using namespace std;

const int INT_MIN_VAL = -2147483648;
const int INT_MAX_VAL = 2147483647;

int helper(const string &str,int i,int ans,int sign) {

    if(i >= str.length() || !isdigit(str[i])) {
        return (int)(sign * ans);
    }

    if (sign * ans <= INT_MIN_VAL) return INT_MIN_VAL;
    if (sign * ans >= INT_MAX_VAL) return INT_MAX_VAL;

    ans = ans * 10 + (str[i] - '0');

    return helper(str,i,ans,sign);

}

int myAtoi(string str,int i) {

    while (i < str.length() && str[i] == ' '){
        i++;
    }
    
    int sign = 1;

    if(str[i] == '-') {
        sign = -1;
        i++;
    } else if(str[i] == '+') {
        i++;
    }

    return helper(str,i+1,0,sign);
}

int main() {
    string str;

    cout << "Enter the String to convert into the Integer: ";
    cin >> str;

    int ans = myAtoi(str,0);

    cout << "Integer is ", ans;

    return 0;
}