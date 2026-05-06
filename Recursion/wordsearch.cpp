// Word Search.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

bool dfs(int i,int j,int index,vector<vector<char>> &board,string &word) {

    if(index == word.size()) {
        return true;
    }

    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] == '$'){
        return false;
    }

    if (board[i][j] != word[index]){
        return false;
    }

    char temp = board[i][j];
    board[i][j] = '$';
    
    for(auto &dir: directions) {
        int new_i = i+dir[0];
        int new_j = j+dir[1];
        if(dfs(new_i,new_j,index++,board,word)) {
            board[i][j] = temp; 
            return true;
        }
    }

    board[i][j] = temp;

    return false;

}

bool exist(vector<vector<char>>& board, string word) {
    int m = board.size();
    int n = board[0].size();

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if(board[i][j] == word[0] && dfs(i,j,0,board,word)) {
                return true;
            }
        }
    }

    return false;
    
}

int main() {
    return 0;
}