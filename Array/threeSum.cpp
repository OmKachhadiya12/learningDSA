//Three Sum

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(int arr[],int n) {
    // set<vector<int>> sett;

    // for (int i=0;i<n;i++){
    //     set<int> hashMap;
    //     for (int j=i+1;j<n;j++){
    //         int third = -(arr[i] + arr[j]);
    //         if(hashMap.find(third) != hashMap.end()) {
    //             vector<int> temp = {arr[i],arr[j],third};
    //             sort(temp.begin(),temp.end());
    //             sett.insert(temp);
    //         }
    //         hashMap.insert(arr[j]);
    //     }
        
    // }

    // return sett;

    sort(arr,arr+n);

    vector<vector<int>> ans;

    for (int i=0;i<n;i++){
        if(i > 0 && arr[i] == arr[i - 1]) { 
            continue;
        } 
        int left = i+1;
        int right = n - 1;
        while (left < right){
           if((arr[i] + arr[left] + arr[right]) == 0) {
                vector<int> temp = {arr[i],arr[left],arr[right]};
                ans.push_back(temp);
                left++;
                right--;
                while (left < right && (arr[left] == arr[left - 1])){
                    left++;
                } 
                while (left < right && (arr[right] == arr[right + 1])){
                    right--;
                }

           } else if((arr[i] + arr[left] + arr[right]) < 0) {
                left++;
           } else {
                right--;
           }
        }
        
    }

    return ans;
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

    vector<vector<int>> ans = threeSum(arr,n);
    
    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].size();j++){
            cout << ans[i][j];
        }
    }
    

    return 0;
}     