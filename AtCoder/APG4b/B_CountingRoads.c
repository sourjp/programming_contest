#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    int a, b;

    cin >> N >> M;

    vector<int> vec(N,0);

    for(int i=0; i<M; i++){
        cin >> a >> b;
        vec.at(a-1)++;
        vec.at(b-1)++;
    }

    for(int i=0; i<N; i++){
        cout << vec.at(i) << endl;
    }
}