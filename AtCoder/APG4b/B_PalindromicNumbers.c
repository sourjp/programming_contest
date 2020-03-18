#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, math;
	cin >> A >> B;
	
    int c0, c1, c2, c3 ,c4;
    int count = 0;
    for (int i=A; i<=B; i++){
        math = i;
        c0 = math %10;
        math = math /10;
        c1 = math %10;
        math = math /10;
        c2 = math %10;
        math = math /10;
        c3 = math %10;
        math = math /10;
        c4 = math %10;
        if((c0 == c4) && (c1 == c3)){
            count++;
        }
    }
    cout << count << endl;
}