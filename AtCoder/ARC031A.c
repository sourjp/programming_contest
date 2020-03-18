#include <bits/stdc++.h>
using namespace std;

int main(){
    string NAME;
    cin >> NAME;

    int math1 = NAME.size() / 2;
    int math2 = NAME.size() % 2;
    int end = math1 + math2;

    for(int i=0, j=NAME.size(); i<NAME.size(); i++){
        j -= 1;
        if(i == end){
            cout << "YES" << endl;
            break;
        }
        if(NAME.at(i) != NAME.at(j)){
            cout << "NO" << endl;
            break;
        }
    }
}