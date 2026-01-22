//Maximum Product.

#include<bits/stdc++.h>
using namespace std;

int maximumProduct(int arr[],int n) {
    int prefix = 1;
    int sufix = 1;
    int maxii = INT_MIN;
    for (int i=0;i<n;i++){
        if(prefix == 0) {
            prefix = 1;
        } 
        if(sufix == 0) {
            sufix = 1;
        }

        prefix*= arr[i];
        sufix*= arr[n - i - 1];
        maxii = max(maxii,max(prefix,sufix));
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
    
    int ans = maximumProduct(arr,n);

    cout << ans;

    return 0;
}