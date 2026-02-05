//Median of Two Sorted arrays.

#include<bits/stdc++.h>
using namespace std;

// Remaining the Optimal Solution.

double mediian(int arr1[],int n1,int arr2[],int n2) {
    // int n = n1 + n2;
    // int i = 0,j = 0;
    // int count = 0;
    // int prev = 0;
    // int current = 0;

    // while (count <= n / 2){
    //     prev = current;
    //     if(i < n1 && (j >= n2 || arr1[i] <= arr2[j])) {
    //         current = arr1[i];
    //         i++;
    //     } else {
    //         current = arr2[i];
    //         j++;
    //     }
    //     count++;
    // }

    // if(n % 2 == 0) {
    //     return (prev + current) / 2.0;
    // } else {
    //     return current;
    // }

    
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

    double median = mediian(arr1,n1,arr2,n2);

    cout << median;
 
    return 0;
}