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