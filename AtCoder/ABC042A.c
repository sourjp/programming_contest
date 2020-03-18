#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int SUM = A + B + C;
    if(SUM == 17){
        if(10 == A+B || 10 == A+C || 10 == B+C){
            cout << "YES" << endl;            
        }
    }
    else{
        cout << "NO" << endl;
    }
}
