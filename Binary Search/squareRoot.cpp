// Square root of number using the Binary search.
 
#include<bits/stdc++.h> 
using namespace std;

int search(int n) {
    int ans = 0;

    int low = 0;
    int high = n;

    // mid  < n / mid
    while(low <= high) {
        long long mid = low + (high - low) / 2;

        if(mid * mid == n) {
            return mid;
        } else if(mid * mid < n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter  the number: ";
    cin >> n;

    int ans = search(n);

    cout << ans;

    return 0;
}