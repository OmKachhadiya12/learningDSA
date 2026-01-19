//Four Sum

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(int arr[],int n,int target) {

    sort(arr,arr + n);

    vector<vector<int>> ans;

    for(int i=0;i<n;i++) {
        if(i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for (int j=i+1;j<n;j++){
        if(j > i + 1 && arr[j] == arr[j - 1]) {
            continue;
        }
            int left = j+1;
            int right = n - 1;
            while (left < right){
                // long long sum =(long long)arr[i] +(long long)arr[j] +(long long)arr[left] +(long long)arr[right];
                long long sum = arr[i] + arr[j] + arr[left] + arr[right];
                if(sum == target) {
                    vector<int> temp = {arr[i],arr[j],arr[left],arr[right]};
                    ans.push_back(temp);
                    left++;
                    right--;

                    while (left < right && arr[left] == arr[left - 1]){
                        left++;
                    }
                    while (left < right && arr[right] == arr[right + 1]){
                        right--;
                    }

                } else if(sum < target) {
                    left++;
                } else {
                    right--;
                }
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

    int k;
    cout << "Enter the Target: ";
    cin >> k;

    vector<vector<int>> ans = fourSum(arr,n,k);
    
    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].size();j++){
            cout << ans[i][j];
        }
    }
    

    return 0;
}     