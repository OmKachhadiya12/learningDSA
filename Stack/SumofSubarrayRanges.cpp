// Sum of Subarray Ranges.

#include<bits/stdc++.h>
using namespace std;

vector<int> nse(vector<int>& arr) {
    stack<int> st;
    vector<int> nsee(arr.size());
    
    for (int i=arr.size()-1;i>=0;i--){
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        nsee[i] = st.empty() ? arr.size() : st.top();
        st.push(i);
    }
    return nsee;
}

vector<int> pse(vector<int>& arr) {
    stack<int> st;
    vector<int> psee(arr.size());
    
    for (int i=0;i<arr.size();i++){
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        psee[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return psee;
}

vector<int> nge(vector<int>& arr) {
    stack<int> st;
    vector<int> ngee(arr.size());
    
    for (int i=arr.size()-1;i>=0;i--){
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        ngee[i] = st.empty() ? arr.size() : st.top();
        st.push(i);
    }
    return ngee;
}

vector<int> pge(vector<int>& arr) {
    stack<int> st;
    vector<int> pgee(arr.size());
    
    for (int i=0;i<arr.size();i++){
        while (!st.empty() && arr[st.top()] < arr[i]) {
            st.pop();
        }
        pgee[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pgee;
}

long long subArrayRanges(vector<int>& arr) {

    vector<int> NSE = nse(arr);
    vector<int> PSE = pse(arr);

    vector<int> NGE = nge(arr);
    vector<int> PGE = pge(arr);

    long long total1 = 0;
    long long total2 = 0;

    for (int i = 0; i < arr.size(); i++) {
        int left1 = i - PSE[i];
        int right1 = NSE[i] - i;

        long long freq1 = left1*right1*1LL;
        long long val1 = (freq1*arr[i]);

        total1 = (total1 + val1);
        
        int left2 = i - PGE[i];
        int right2 = NGE[i] - i;

        long long freq2 = left2*right2*1LL;
        long long val2 = (freq2*arr[i]);

        total2 = (total2 + val2);
    }

    return total2 - total1; 
    
}

int main() {
    return 0;
}