//Pattern-1
// *********
// *********
// *********
// *********
// *********
// *********


#include<iostream> 
using namespace std;

int main() {

    int x;
    cout << "How many Stars want you to create the Square:";
    cin >> x;

    for(int i=0;i<x;i++) {
        for (int j=0;j<x;j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}