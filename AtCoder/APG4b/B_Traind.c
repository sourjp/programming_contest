#include <bits/stdc++.h>
using namespace std ;
 
int main(){
    int N;
    cin >> N;
    vector<int> vec(N);

    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }

    int b=1;
    for(int i=0;i<N;i++){
        /*
        for(int x: vec){
            cout << x;
        }
        cout << endl;
        */

        b = vec.at(b-1);
        // cout << "b=" << b << endl;
       
        if(b == 2){
            cout << i+1;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0; 
} 