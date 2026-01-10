//Pascal Triangle 2.

#include<bits/stdc++.h>
using namespace std;

void generate(int n) {
    for (int j=0;j<n;j++){ 
        
        long long ans = 1;

        for (int i = 0; i <= j; i++) {
            cout << ans << " ";
            ans = ans * (j - i) / (i + 1);
        }
        cout << endl;
    }
}


int main() {

    int n;
    cout << "Enter the Row Number to print the Pascal traingle speceifc row: ";
    cin >> n;
    
    generate(n);

    return 0;
}