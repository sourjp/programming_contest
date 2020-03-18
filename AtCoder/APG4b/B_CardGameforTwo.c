#include <bits/stdc++.h>
using namespace std ;
 
int main(){
    int N;
    cin >> N;

    // Make number cards
    vector<int> vec(N);
    for(int i=0; i<N; i++){
        cin >> vec.at(i);
    }

    // Pick up cards
    int alice = 0;
    int bob = 0 ;
    int math = 0;


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
                break;
            }
        }
        if(0 == i % 2){
            alice += math;
        }
        if(1 == i% 2){
            bob += math;
        }
    }
    cout << alice - bob << endl;
} 