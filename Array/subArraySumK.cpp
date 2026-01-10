//Subarray Sum equals to K.

#include<bits/stdc++.h>
using namespace std;

int subarraySumK(int arr[],int n,int k) {
    unordered_map<int,int> mp;
    mp[0] = 1;

    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (mp.find(sum - k) != mp.end()) {
            count += mp[sum - k];
        }

        mp[sum]++;
    }

    return count;

}

int main() {

    int n;
    cout << "Enter size of an array: ";
    cin >> n;
 
    int arr[n];

    cout << "Enter the elements of it: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int k;
    cout << "Enter the Target: ";
    cin >> k; 

    int length = subarraySumK(arr,n,k);

    cout << length;

    return 0;
}