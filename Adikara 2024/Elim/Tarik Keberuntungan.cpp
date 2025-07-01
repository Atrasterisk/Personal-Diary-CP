#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<long long> vect;
	
	int n; cin >> n;
	int x; cin >> x;
	int p; cin >> p;
	
	int s = p*(1+p)/2;
	if ((x + s) % n == 0){
		cout << "Ya";
	} else {
		cout << "Tidak";
	}
	return 0;
}
