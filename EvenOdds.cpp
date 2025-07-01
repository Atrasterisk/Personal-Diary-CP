#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	int k;
	cin >> n;
	cin >> k;
	
	cout << n << k;
	if ((n+1)/2 < k) {
		cout << k*2 + 1;
	} else {
		cout << (k - ((n+1)/2)) *2;
	}
}
