//Capacity To Ship Packages Within D Days.

#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n) {
    int sum = 0;
    for (int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    return sum;
}

int checking(int arr[],int n,int days,int mid) {
    int ans = 0;
    int day = 1;
    for (int i=0;i<n;i++){
        ans = ans + arr[i];
        if(ans > mid) {
            day++;
            ans = arr[i];
        }
        if(day > days) {
            return 0;
        }
    }

    return 1;
    
}

int search(int arr[],int n,int days) {
   int low = *max_element(arr,arr+n);
   int high = sum(arr,n); 
   int ans = high;

   while (low <= high){
    int mid = low + (high - low) / 2;
    int check = checking(arr,n,days,mid);

    if (check == 1){
        ans = mid;
        high = mid - 1;
    } else {
        low = mid + 1;
    }
   }

   return ans;
   
} 

int main() {

    int n;
    cout << "How many packages want to add: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Weights of th each packages: ";

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int days;
    cout << "Enter the Day's: ";
    cin >> days;

    int ans = search(arr,n,days);

    cout << ans;

    return 0;
}