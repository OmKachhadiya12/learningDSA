//Missing Number and Repeative Number from  the Array.

#include<bits/stdc++.h>
using namespace std;

pair<int,int> MissingRepeative(int arr[],int n) {
    // int hash[n+1] = {0};

    // for (int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }

    // pair<int,int> ans;

    // for (int i=1;i<=n;i++){
    //     if(hash[i] == 0) {
    //         ans.first = i;
    //     } else if(hash[i] == 2) {
    //         ans.second = i;
    //     }
    // }

    // return ans;

    int sum = n * (n + 1) / 2;
    int sumSquare = n * (n + 1) * (2 * n + 1) / 6;

    int sum1 = 0;
    int sumSquare1 = 0;

    for (int i=0;i<n;i++){
        sum1+= arr[i];
        sumSquare1+= arr[i] * arr[i]; 
    }

    int diff = sum1 - sum;
    int diff1 = sumSquare1 - sumSquare;

    int sum = diff1 / diff;
    
    int repeating = (diff + sum) / 2;
    int missing = sum - repeating;

    return {missing, repeating};

}

int main() {

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    pair<int,int> ans = MissingRepeative(arr,n);

    cout << ans.first << " " << ans.second;
    
    return 0;
}