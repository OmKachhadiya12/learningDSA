//Two Sum

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(int arr[],int n,int target) {
   unordered_map<int,int> mpp;

   for(int i=0;i<n;i++){
    int need = target - arr[i];
    if(mpp.find(need) != mpp.end()) {
        return {mpp[need],i};
    }
    mpp[arr[i]] = i;
   }
   
   return {-1,-1};

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

    vector<int> index = twoSum(arr,n,k);

    for(auto it : index) {
        cout << it << " ";
    }

    return 0;
}