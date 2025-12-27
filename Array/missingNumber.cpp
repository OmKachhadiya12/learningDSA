//Missing Number

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int n) {
    // int hash[n+1] = {0};

    // for(int i=0;i<n;i++) {
    //     hash[arr[i]] = 1;
    // }

    // for (int i=0;i<=n;i++){
    //     if(hash[i] == 0) {
    //         return i;
    //     }
    // }
    // return -1;

    // int sum1 = (n * (n + 1)) / 2;
    // int sum2 = 0;

    // for (int i=0;i<n;i++){
    //     sum2+=arr[i];
    // }

    // return (sum1 - sum2);
    
    int xor1 = 0;
    for(int i=0;i<=n;i++){
        xor1 = xor1 ^ i;
    }

    int xor2 = 0;
    for (int i=0;i<n;i++){
        xor2 = xor2 ^ arr[i];
    }

    return (xor1 ^ xor2);
}

int main() {

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int missing = missingNumber(arr,n);

    cout << missing;
    

    return 0;
}