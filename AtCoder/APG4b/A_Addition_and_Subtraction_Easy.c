#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    char op;
    cin >> A >> op >> B;

    if(op == '+'){
        cout << A + B << endl;
    }
    else if(op == '-'){
        cout << A - B << endl;
    }
}