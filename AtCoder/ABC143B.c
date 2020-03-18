#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> tako(N);

    for(int i=0; i<N; i++){
        cin >> tako.at(i);
    }

    int result=0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            result = result + tako.at(i) * tako.at(j);
        }
    }

    cout << result << endl;
}

