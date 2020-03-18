#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;

    // Make vector
    vector<int> vec(N);
    for(int i=0; i<N; i++){
        cin >> vec.at(i);
    }

    // count Mochi
    int math;
    int count=0;
    for(int i=0; i<N; i++){
        math = vec.at(i);

        for(int j=0; j<N; j++){
            if(math < vec.at(j)){
                math = vec.at(j);
            }
        }

        for(int j=0; j<N; j++){
            if(math == vec.at(j)){
                vec.at(j) = 0;
            }
        }

        if(math != 0){
            count++;
        }
    }
    cout << count << endl;
}