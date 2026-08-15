// Fruit Into Baskets.

#include<bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
    int i = 0;
    int j = 0;
    unordered_map<int,int> mpp;
    int maxLength = 0;

    while (j < fruits.size()) {
        mpp[fruits[j]]++;

        if(mpp.size() > 2) {

            // while (mpp.size() > 2) {
            //     mpp[fruits[i]]--;
            //     if(mpp[fruits[i]] == 0) {
            //         mpp.erase(fruits[i]);
            //     }
            //     i++;
            // }
            
            mpp[fruits[i]]--;
            if(mpp[fruits[i]] == 0) {
                mpp.erase(fruits[i]);
            }
            i++;
            
        }

        if(mpp.size() <= 2) {
            maxLength = max(maxLength,j - i + 1);
        }

        j++;
    }

    return maxLength;
    
}

int main() {
    return 0;
}