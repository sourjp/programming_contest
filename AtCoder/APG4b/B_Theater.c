#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;

    int l,r;
    int sum;

    for(int i=0; i<N; i++){
        cin >> l >> r;
        sum +=  r-l;
        sum++;
        if(i == N-1){
            cout << sum << endl; 
        }        
    }
}