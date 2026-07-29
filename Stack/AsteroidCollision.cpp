// Asteroid Collision.

#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    
    stack<int> st;
    vector<int> result;
    int i = 0;

    while (i < asteroids.size()) {
        if(asteroids[i] < 0) {
            while (!st.empty() && st.top() > 0 && abs(asteroids[i]) > st.top()) {
                st.pop();
            }
            if(!st.empty() && st.top() == abs(asteroids[i])) {
                st.pop();
            } else if(st.empty() || st.top() < 0) {
                st.push(asteroids[i]);
            }
        } else {
            st.push(asteroids[i]);
        }
        i++;
    }
    
    while (!st.empty()) {
    result.push_back(st.top());
    st.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    return 0;
}