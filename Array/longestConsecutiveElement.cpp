//Longest Consecutive element in an Array

#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(int arr[],int n) {
    unordered_set<int> tempSet;
    for (int i=0;i<n;i++){
        tempSet.insert(arr[i]);
    }

    int longest = 1;

    for(auto elements : tempSet) {
        if(tempSet.find(elements - 1) == tempSet.end()) {
            int count = 1;
            while (tempSet.find(elements+count) != tempSet.end()){
                count++;
            }

            longest = max(count,longest);
            
        }
        
    }

    return longest;
    
    
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

    int longest = longestSubsequence(arr,n);

    cout << longest;
    
    return 0;
}