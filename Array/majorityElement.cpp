//Majority Element

#include<bits/stdc++.h>
using namespace std;

int majorElement(int arr[],int n) {
    // int need = n / 2;
    // map<int,int> mpp;

    // for (int i=0;i<n;i++){
    //  mpp[arr[i]]++;   
    // }
     
    // for(auto it : mpp) {
    //     if(it.second > need) {
    //         return it.first;
    //     }
    // }

    // return -1;

    int count = 0;
    int el;

    for(int i=0;i<n;i++) {
        if(count == 0) {
            count++;
            el = arr[i];
        } else if(arr[i] == el) {
            count++;
        } else {
            count--;
        }
    }

    int count1;
    for (int i=0;i<n;i++){
        if(arr[i] == el) {
            count1++;
        }
    }

    if(count1 > (n/2)) {
        return el;
    }

    return -1;
    

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

    int major = majorElement(arr,n);

    cout << major;
    
    return 0;
}