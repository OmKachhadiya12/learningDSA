// Minimum Number of Days to Make m Bouquets.
 
#include<bits/stdc++.h> 
using namespace std;

int check(int arr[],int bloomDaySize,int n,int k,int mid) {
    int ans = 0;
    int count = 0;

    for (int i=0;i<bloomDaySize;i++){
        if(arr[i] <= mid) {
            count++;
        } else {
            ans = ans + count / k;
            count = 0;
        }
    }
    ans = ans + count / k;

    if(ans >= n) {
        return 1;
    } else {
        return 0;
    }
    
}

int search(int arr[],int bloomDaySize,int n,int k) {

    long long checkOverflow = n * k;

    if (bloomDaySize < checkOverflow){
        return -1;
    }
    

    int low = *min_element(arr,arr+bloomDaySize);
    int high = *max_element(arr,arr+bloomDaySize);

    int ans = high;

    while (low <= high){
        int mid = low + (high - low) / 2;

        int checking = check(arr,bloomDaySize,n,k,mid);

        if (checking == 1){
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
    cout << "How many Bouquets want to makes: ";
    cin >> n;

    int k;
    cout << "How many Adjacent flowers required: ";
    cin >> k;

    int bloomDaySize;
    cout << "Enter Bloom day size: ";
    cin >> bloomDaySize;

    int arr[bloomDaySize];
    cout << "Enter day's: ";
    
    for (int i=0;i<bloomDaySize;i++){
        cin >> arr[i];
    }

    int ans = search(arr,bloomDaySize,n,k);;

    cout << ans;

    return 0;
}