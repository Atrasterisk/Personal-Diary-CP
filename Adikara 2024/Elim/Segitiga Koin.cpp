#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int s = 0;
	int i = 0;
	while (n > s){
		++i;
		s = s + i;
		
		if (n <= s){
			if (n < s){
				cout << i - 1;
			} else {
				cout << i;
			}
		}
	}
	return 0;
}
