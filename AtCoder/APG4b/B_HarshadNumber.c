#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int N,math,count = 0;
	cin >> N;
	math = N;
	
	for (int i=0;i<8;i++){
		count += math %10;
		math = math / 10;
	}
	
	if ( N % count == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}