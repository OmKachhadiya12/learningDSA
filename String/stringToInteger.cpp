// String to Integer.

#include<bits/stdc++.h>
using namespace std;

int stringToInt(string str) {
    int ans = 0;
    int i = 0;
    int n = str.length();
    int sign = 1;

    while (i < n && str[i] == ' '){
        i++;
    }

    if(i < n && str[i] == '-'){
        sign = -1;
        i++;
    } else if (i < n && str[i] == '+') {
        i++;
    }

    while (i < n && isdigit(str[i])){
        int digit = str[i] - '0';

        if (ans > INT_MAX / 10 ||
            (ans == INT_MAX / 10 && digit > 7)) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }

        ans = ans * 10 + digit;
        i++;
    }
    
    return ans * sign;
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << ": " << stringToInt(str);

    return 0;
}