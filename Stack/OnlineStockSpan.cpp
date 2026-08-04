// Online Stock Span.

#include<bits/stdc++.h>
using namespace std;

class StockSpanner{
    stack<pair<int,int>> st;
    int index = -1;

    StockSpanner() {
        index = -1;
    }

    int next(int price) {
        index++;
        while (!st.empty() && st.top().first <= price) {
            st.pop();
        }
        int ans = index - (st.empty() ? -1 : st.top().second);
        st.push({price,index});
        return ans;
    }
};

int main() {
    return 0;
}