#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;
	long long m; cin >> m;
	long long x; cin >> x;	
	
	int gcd = __gcd(n,m);
	if (gcd % x == 0){
		cout << "IYA";
	} else {
		cout << "TIDAK";
	}
}
