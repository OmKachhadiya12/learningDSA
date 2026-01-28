// KOKO eatting bananas.
 
#include<bits/stdc++.h> 
using namespace std;

int check(int arr[],int n,int k,int hour) {
    long long ans = 0;
    for (int i=0;i<n;i++){
        ans += (arr[i] + k - 1) / k;
        if (ans > hour) {
            return 0;
        }
    }
    
    return 1;
    
}

int search(int arr[],int n,int hours) {

    int low = 1;
    int high = *max_element(arr, arr+n);

    int k = high;

    while (low <= high){
        int mid = low + (high - low) /2;

        int checking = check(arr,n,mid,hours);

        if(checking) {
            k = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }

    }
    

    return k;
}

int main() {

    int n;
    cout << "Enter  the number of Piles: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Bananas containes by eack pile: ";
    
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hours;
    cout << "Enter the Hour: ";
    cin >> hours;
    

    int ans = search(arr,n,hours);

    cout << ans;

    return 0;
}