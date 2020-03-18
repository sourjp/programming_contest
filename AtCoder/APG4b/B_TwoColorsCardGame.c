#include <bits/stdc++.h>
using namespace std ;
 
int main(){
    int N, M;

    // Define Blue Cards
    cin >> N;
    vector<string> s(N);
    for(int i=0; i<N; i++){
        cin >> s.at(i);
    }

    // Define Red Cards
    cin >> M;
    vector<string> t(M);
    for(int i=0; i<M; i++){
        cin >> t.at(i);
    }

    int result=0;

    for(int i=0; i<N; i++){
        int blue=0;
        int red=0;

        for(int j=0; j<N; j++){
            if(s.at(i) == s.at(j)){
                blue++;
            }
        }
        for(int j=0; j<M; j++){
            if(s.at(i) == t.at(j)){
                red++;
            }
        }
        if(result < blue - red){
            result = blue - red;
        }
    }
    cout << result << endl;
} 