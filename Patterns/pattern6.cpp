// Pattern-6
// 12345
// 1234
// 123
// 12
// 1

#include<iostream> 
using namespace std;

int main() {

    int x;
    cout << "Enter any number: ";
    cin >> x;

    for (int i=1;i<=x;i++){
        for (int j=1;j<=(x-i+1);j++){
            cout << j << " ";
        }
        cout << endl;
        
    }
    

    return 0;
}