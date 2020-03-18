#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int base = 1;
    int N, K;
    cin >> N >> K;

    for(int i=0; i<N; i++){
        if(base*2 > base+K){
            base += K;
        }
        else{
            base *= 2;
        }
    }

    cout << base << endl;
}
