#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n; cin >> n;
	long long x; cin >> x;
	long long p; cin >> p;
	
	long long s = (p*(1+p)/2) + x;
	for (long long a = p; a > 0; a--){
		if (s % n == 0){
			cout << "Ya";
			return 0;
		}
		s = s - a;
	}
	cout << "Tidak";
	return 0;
}  
