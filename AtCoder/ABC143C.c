#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;

    cin >> N;
    cin >> S;

    int count=1;
    int i=0;
    int j=1;

    while(i < N-1){
        if(S.at(i) == S.at(j)){
            j++;
        }
        if(S.at(i) != S.at(j)){
            i = j;
            count++;
        }
        if(j == N-1){
            break;
        }
    }

    cout << count << endl;
}

