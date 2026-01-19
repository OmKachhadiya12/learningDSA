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

    for (int i=0;i<n;i++){
        int left = i+1;
        int right = n - 1;
        while (left < right){
           if((arr[i] + arr[left] + arr[right]) == 0) {

           } else if((arr[i] + arr[left] + arr[right]) < 0) {
                left++;
           } else {
                right--;
           }
        }
        
    }
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

    

    return 0;
}     