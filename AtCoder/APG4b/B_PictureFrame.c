#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    string a;
    cin >> H >> W;

    for(int i=0; i<H; i++){
        if(i == 0){
            for(int j=0; j<W+2; j++){
                cout << '#';
            }
            cout << endl;
        }
        
        cin >> a;
        cout << '#' << a << '#' << endl;
        
        if(i == H-1){
            for(int j=0; j<W+2; j++){
                cout << '#';
            }
            cout << endl;
        }
    }
}