//Reverse words in a String

#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str) {

    int i = 0;
    int j = 0;

    while (i < str.length() && str[i] == ' '){
        i++;
    }

    while (i < str.length()){
        while (i < str.length() && str[i] != ' '){
            str[j++] = str[i++];
        }

        while (i < str.length() && str[i] == ' '){
            i++;
        }

        if (i < str.length()){
            str[j++] = ' ';
        }
    }
    
    
    str.resize(j);
    int n = str.length();
    int left = 0;
    int right = str.length() - 1;

    while (left < right){
        swap(str[left],str[right]);
        left++;
        right--;
    }

    i = 0;

    while (i < n){
        while (i < n && str[i] == ' '){
            i++;
        }
        int start = i;
        while (i < n && str[i] != ' '){
            i++;
        }
        int end = i - 1;
        while (start < end){
            swap(str[start],str[end]);
            start++;
            end--;
        }
    }
    
    return;
    
}

int main() {
    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << "Before: " << str;

    reverseString(str);

    cout << endl << "After: " << str; ;
    return 0;
}