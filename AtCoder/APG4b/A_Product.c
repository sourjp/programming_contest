#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    int X = a * b;
    if ( X % 2 == 0){
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl; 
    }
}