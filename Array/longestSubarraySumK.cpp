//Longest Subarray with Sum K.

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[],int n,int k) {
   
    int i = 0,j = 0;
    int sum = arr[0],len = 0;

    while (j < n){
        while (sum > k && i <= j){
            sum-=arr[i];
            i++;
        }
        
        if(sum == k) {
            len = max(len,j - i + 1);
        }

        j++;
        if(j < n) {
            sum+=arr[j];
        }
    }

    return len;
    

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
    cout << "Enter the Sum: ";
    cin >> k; 

    int len = longestSubarray(arr,n,k);

    cout << len;

    return 0;
}