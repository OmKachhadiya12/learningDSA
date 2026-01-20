//Count Subarray  with XOR as K.

#include<bits/stdc++.h>
using namespace std;

int countSuarrayXORk(int arr[],int n,int k) {

    int xorr = 0;
    map<int,int> mpp;
    mpp[xorr]++;
    int count = 0;

    for (int i=0;i<n;i++){
        xorr = xorr ^ arr[i];
        int x = xorr ^ k;
        count+=mpp[x];
        mpp[xorr]++;
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

    int count = countSuarrayXORk(arr,n,k);

    cout << count;
    
    return 0;
}     