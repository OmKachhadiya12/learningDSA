// Minimize Max distance to Gas Station.

#include<bits/stdc++.h>
using namespace std;

int checking(int arr[],int n,long double mid) {
    int count = 0;
    for (int i=1;i<n;i++){
        int numberBetween = ((arr[i] - arr[i-1]) / mid);
        if(((arr[i] - arr[i-1]) / mid) == numberBetween * mid) {
            numberBetween--;
        }
        count += numberBetween;
    }
    return count;
    
}

long double search(int arr[],int n,int k) {
    long double low = 0;
    long double high = 0;
    for(int i=0;i<n-1;i++) {
        high = max(high,(long double) arr[i+1] - arr[i]);
    }

    long double diff = 1e-6;

    while (high - low > diff){
        long double mid = low + (high - low) / 2.0;
        int check = checking(arr,n,mid);

        if (check > k){
            low = mid;
        } else {
            high = mid;
        }
    }
    return high;
}

int main() {

    int n;
    cout << "Enter the Gas Stations: ";
    cin >> n;

    int arr[n];
    cout << "Enter the distance between the Gas Station: ";

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the How many new gas station want to add: ";
    cin >> target;

    long double ans = search(arr,n,target);

    cout << ans;

    return 0;
}