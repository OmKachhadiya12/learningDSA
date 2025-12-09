// Pattern-13
// A
// AB
// ABC
// ABCD

#include<iostream> 
using namespace std;

int main() {

    int x;
    cout << "Enter any Number: ";
    cin >> x;

    for (int i=1;i<=x;i++){
        for (char j='A';j<'A' + i;j++){
            cout << j << " ";
        }
        cout << endl;
        
    }
    

    return 0;
} 