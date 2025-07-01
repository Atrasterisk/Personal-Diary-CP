#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;
	long long m; cin >> m;
	long long a; cin >> a;
	
	long long x; long long y;
	x = n/a;
	y = m/a;
	if (n % a != 0){
		x = x + 1;
	} if (m % a != 0){
		y = y + 1;
	}
	
	cout << x * y;
	
	return 0;
}
