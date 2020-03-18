#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int S, A, B, C;
	cin >> S;
	A = S % 10; // 一の桁の1の有無を確認
	B = S / 100; // 百の桁の1の有無を確認
	C = (S - (B * 100)) / 10; // 十の桁の1の有無を確認
	cout << A + B + C << endl;
}