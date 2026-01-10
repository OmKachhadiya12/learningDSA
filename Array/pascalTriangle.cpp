//Pascal Triangle.

#include<bits/stdc++.h>
using namespace std;

void generate(int n) {
    long long ans = 1;
    for (int i = 0; i <= n; i++) {
        cout << ans << " ";
        ans = ans * (n - i) / (i + 1);
    }
}


int main() {

    int n;
    cout << "Enter the Row Number to print the Pascal traingle speceifc row: ";
    cin >> n;
    
    generate(n);

    return 0;
}