//Maiximum Subarray Sum

#include<bits/stdc++.h>
using namespace std;

int maximumSubarray(int arr[],int n) {
    // int maxii = INT_MIN,sum;

    // for (int i=0;i<n;i++){
    //     sum  = 0;
    //     for (int j=i;j<n;j++){
    //         sum = sum + arr[j];
    //         maxii = max(sum,maxii);           
    //     }
    // }

    // return maxii;
    
    int maxii = INT_MIN,sum = arr[0];
    int i = 0;

    while (i < n){
        sum  = sum + arr[i];
        maxii = max(maxii,sum);
        if(sum < 0) {
            sum = 0;
        }
        i++;
    }

    return maxii;
    

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

    int maxii = maximumSubarray(arr,n);

    cout << maxii;
    
    return 0;
}