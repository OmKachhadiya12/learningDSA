//Majority Element (n / 3)

#include<bits/stdc++.h>
using namespace std;

vector<int> majorElement(int arr[],int n) {
    // unordered_map<int,int> mpp;
    // int need = n / 3;
    // vector<int> temp;

    // for (int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }

    // for(auto element : mpp) {
    //     if(element.second > need) {
    //         temp.push_back(element.first);
    //         cout << element.second;
    //     } 
    // }
    
    // return temp;

    // unordered_map<int,int> mpp;
    // int mm = (n / 3) + 1;
    // vector<int> temp;

    // for (int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    //     if(mpp[arr[i]] == mm) {
    //         temp.push_back(arr[i]);
    //     }
    // }
    
    // return temp;

    int el1,el2;
    int count1 = 0,count2 = 0;

    for (int i=0;i<n;i++){
        if(count1 == 0 && arr[i] != el2) {
            count1 = 1;
            el1 = arr[i];
        } else if(count2 == 0 && arr[i] != el1) {
            count2 = 1;
            el2 = arr[i];
        } else if(arr[i] == el1) {
            count1++;
        } else if(arr[i] == el2) {
            count2++;
        } else {
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2 = 0; 
    for (int i=0;i<n;i++){
        if(arr[i] == el1) {
            count1++;
        } 
        if(arr[i] == el2) {
            count2++;
        }
    }
    int need = (n / 3) + 1;
    vector<int> temp;
    if(count1 > need) {
        temp.push_back(el1);
    } 
    if(count2 > need) {
        temp.push_back(el2);
    }

    return temp;


    // Mine leetcode solution Accepted

    //     class Solution {
    // public:
    //     vector<int> majorityElement(vector<int>& arr) {
    //         int el1 = 0, el2 = 0;
    //         int count1 = 0, count2 = 0;

    //         // Phase 1: Find candidates
    //         for (int x : arr) {
    //             if (x == el1) count1++;
    //             else if (x == el2) count2++;
    //             else if (count1 == 0) {
    //                 el1 = x;
    //                 count1 = 1;
    //             }
    //             else if (count2 == 0) {
    //                 el2 = x;
    //                 count2 = 1;
    //             }
    //             else {
    //                 count1--;
    //                 count2--;
    //             }
    //         }

    //         // Phase 2: Verify
    //         count1 = 0;
    //         count2 = 0;
    //         for (int x : arr) {
    //             if (x == el1) count1++;
    //             else if (x == el2) count2++;
    //         }

    //         vector<int> ans;
    //         int n = arr.size();
    //         if (count1 > n / 3) ans.push_back(el1);
    //         if (count2 > n / 3) ans.push_back(el2);

    //         return ans;
    //     }
    // };

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

    vector<int> major = majorElement(arr,n);

    for(auto it : major) {
        cout << it << " ";
    }
    
    return 0;
}