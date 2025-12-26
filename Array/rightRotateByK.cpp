//Left rotate the array by K places

#include<bits/stdc++.h>
using namespace std;

void rightRotateByK(int arr[],int n,int k) {
    // vector<int> temp;
    // k = k % n;

    // for (int i=n-k;i<n;i++) {
    //     temp.push_back(arr[i]);
    // }
  
    // for (int i=n-k-1;i>=0;i--) {
    //     arr[i+k] = arr[i];
    // }

    // int j = 0;
    // for (int i=0;i<k;i++){
    //     arr[i] = temp[j];
    //     j++;
    // }
    // return;

    reverse(arr+n-k,arr);
    reverse(arr,arr+n-k);
    reverse(arr,arr+n);

    return;

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

    int d;
    cout << "Enter the 'K': ";
    cin >> d;

    rightRotateByK(arr,n,d);

    for (int j=0;j<n;j++){
        cout << arr[j]  << " ";
    }
    

    return 0;
}