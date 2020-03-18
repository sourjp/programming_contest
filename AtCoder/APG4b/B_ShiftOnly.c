#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, A;
    cin >> N;

    int r, count, min = 0;
    for(int i=0; i<N; i++){
        cin >> A;
        while(r==0){
            r = A % 2; 
            A = A / 2;
            if(r==0){
                count++;
            }
        }
        if(i == 0){
            min = count;
        }
        if(min > count){
            min = count;
        }
        r=0;
        count = 0;
    }
    cout << min << endl;
}