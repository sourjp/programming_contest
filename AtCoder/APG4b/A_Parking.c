#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;

    int M = N * A;
    if (M <= B){
        cout << M << endl;
    }
    else {
        cout << B << endl;
    }
}