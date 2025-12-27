//Number that appears Once in the array.

#include<bits/stdc++.h>
using namespace std;

int appearsOnce(int arr[],int n) {
    int xorr = 0;

    for (int i=0;i<n;i++){
        xorr = xorr ^ arr[i];
    }
    
    return xorr;
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

    int number = appearsOnce(arr,n);

    cout << number;
    

    return 0;
}