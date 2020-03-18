#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int result = A - B * 2;
    if(result >= 0){
        cout << result << endl;
    }
    else{
        cout << '0' << endl;
    }
}

