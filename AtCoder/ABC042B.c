#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<string> vec(N);
    for(int i=0; i<N; i++){
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<N; i++){
        cout << vec.at(i);
    }
}
