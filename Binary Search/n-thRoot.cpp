// N-th root of Integer number using the Binary search.
 
#include<bits/stdc++.h> 
using namespace std;

int powerCheck(int mid, int root, int n) {
    long long ans = 1;

    for (int i = 1; i <= root; i++) {
        ans *= mid;

        if (ans > n) {
            return 1;   
        }
    }

    if (ans == n) return 0;   
    return -1;
}

int search(int n, int root) {
    int low = 1;
    int high = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int check = powerCheck(mid, root, n);

        if (check == 0) {
            return mid;
        } 
        else if (check < 0) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {

    int n;
    cout << "Enter  the number: ";
    cin >> n;

    int root;
    cout << "Enter the Root to find: ";
    cin >> root;

    int ans = search(n,root);

    cout << ans;

    return 0;
}