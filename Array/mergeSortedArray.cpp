//Merge of Two Sorted arrays.

#include<bits/stdc++.h>
using namespace std;

void mergeArray(int arr1[],int arr2[],int m,int n) {
    int i = m - 1;
    int j = n - 1;
    int k = ( m + n ) - 1;

    while (i >= 0 && j >= 0){
        if(arr1[i] <= arr2[j]) {
            arr1[k] = arr2[j];
            j--;
        } else {
            arr1[k] = arr1[i];
            i--;
        }
        k--;
    }

    while (j >= 0){
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    
    return;

}

int main() {

    int n1;
    cout << "Enter size of an array 1: ";
    cin >> n1;
 
    int arr1[n1];

    cout << "Enter the elements of it: ";
    for (int i=0;i<n1;i++){
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter size of an array 2: ";
    cin >> n2;
 
    int arr2[n2];

    cout << "Enter the elements of it: ";
    for (int i=0;i<n2;i++){
        cin >> arr2[i];
    }

    mergeArray(arr1,arr2,n1,n2);
 
    return 0;
}