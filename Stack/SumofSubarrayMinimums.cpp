// Sum of Subarray Minimums.

#include<bits/stdc++.h>
using namespace std;

vector<int> nse(vector<int>& arr) {
    stack<int> st;
    vector<int> NSE(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        NSE[i] = st.empty() ? arr.size() : st.top();

        st.push(i);
        
    }
    
    return NSE;
    
}

vector<int> pse(vector<int>& arr) {
    stack<int> st;
    vector<int> PSE(arr.size());

    for (int i = 0; i < arr.size(); i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }

        PSE[i] = st.empty() ? -1 : st.top();

        st.push(i);
        
    }
    
    return PSE;
    
}

int sumSubarrayMins(vector<int>& arr) {

    int mod = 1e9 + 7;

    vector<int> nsee = nse(arr);
    vector<int> psee = pse(arr);

    int total = 0;

    for (int i = 0; i < arr.size(); i++) {
        int left = i - psee[i];
        int right = nsee[i] - i;

        long long freq = left*right*1LL;
        int val = (freq*arr[i]*1LL) % mod;

        total = (total + val) % mod; 
    }
    
    return total;
    
}

int main() {
    return 0;
}