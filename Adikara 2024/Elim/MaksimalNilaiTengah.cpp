#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int s; cin >> s;
	
	int mid = n / 2;
	int avg = s / n;
	if (s % n > mid-1){
		cout << avg + 1;
	} else {
		cout << avg;
	}
	return 0;
}
