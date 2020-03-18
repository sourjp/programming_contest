#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin >> S;

    int i = S.size();

    if(S.at(i-1) == 'T'){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}