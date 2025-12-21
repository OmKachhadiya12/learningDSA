//Second Largest element

#include <bits/stdc++.h>
using namespace std;

int slargest(int arr[], int n) {
    // int maxi = arr[0];
    // int deletee;
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > maxi) {
    //         maxi = arr[i];
    //         deletee = i;
    //     }
    // }
    // arr[deletee] = 0;

    // int maxii = arr[0];

    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > maxii) {
    //         maxii = arr[i];
    //     }
    // }

    // return maxii;

    // int maxii = arr[0];

    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > maxii) {
    //         maxii = arr[i];
    //     }
    // }

    // int smaxii = -1;

    // for (int i = 0; i < n; i++) {
    //     if (arr[i] > smaxii && arr[i] != maxii) {
    //         smaxii = arr[i];
    //     }
    // }

    // return smaxii;

    int maxii = arr[0];
    int smaxii = INT_MIN;

    for (int i=0;i<n;i++){
        if(arr[i] > maxii) {
            smaxii = maxii;
            maxii = arr[i];
        } else if(arr[i] > smaxii && arr[i] != maxii) {
            smaxii = arr[i];
        }
    }

    return smaxii;
    

}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = slargest(arr, n);

    cout << endl << maxi; 
    
    return 0;
}
