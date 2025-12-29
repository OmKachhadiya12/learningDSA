//Sorts Colors(Red: 0,White: 1 and Blue: 2)

#include<bits/stdc++.h>
using namespace std;

void sortColors(int arr[],int n) {
    // int count0 = 0,count1 = 0,count2 = 0;

    // for (int i=0;i<n;i++){
    //     if(arr[i] == 0) {
    //         count0++;
    //     } else if(arr[i] == 1) {
    //         count1++;
    //     } else {
    //         count2++;
    //     }
    // }

    // for (int i=0;i<count0;i++){
    //     arr[i] = 0;
    // }
    // for (int i=count0;i<(count1+count0);i++){
    //     arr[i] = 1;
    // }
    // for (int i=(count1+count0);i<n;i++){
    //     arr[i] = 2;
    // }
    
    // return;

    int low = 0,mid = 0,high = (n-1);

    while(mid<=high){
        if(arr[mid] == 0) {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }

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

    sortColors(arr,n);

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}