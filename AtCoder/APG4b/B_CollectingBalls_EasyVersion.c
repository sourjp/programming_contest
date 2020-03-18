#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, K, X;
    int length = 0;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> X;
        if(X > K-X){
            length += 2 * (K-X);
        }
        else{
            length += 2 * X;
        }
    }
    cout << length << endl;
}
