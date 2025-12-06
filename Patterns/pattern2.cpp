//Pattern-2
// *
// **
// ***
// ****
// *****
// ******

#include<iostream>
using namespace std;



int main() {

    int x;
    cout << "How many Lines want you to print: ";
    cin >> x;
    
    for (int i = 0; i < x; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
        
    }
    

    return 0;
}