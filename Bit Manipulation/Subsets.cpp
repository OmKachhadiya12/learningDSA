// Subset.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &arr)
{
    int n = arr.size();
    int subsets = 1 << n;
    vector<vector<int>> ans;

    for (int num = 0; num < subsets; num++)
    {
        vector<int> list;
        for (int i = 0; i < n; i++)
        {
            if (num & (1 << i))
            {
                list.push_back(arr[i]);
            }
        }
        ans.push_back(list);
    }

    return ans;
}

int main()
{
}