#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	for (int i = 0; i < t; i++){
		int n; cin >> n;
		int a; cin >> a;
		int b; cin >> b;
		string s; cin >> s;
		
		int x = 0;
		int y = 0;
		
		int count = 0;
		
		while (x < a || y < b) {
			count = count + 1;
			if (s[count%n] == 'N'){
				y += 1;
			} else if (s[count%n] == 'E'){
				x += 1;
			} else if (s[count%n] == 'S'){
				y -= 1;
			} else if (s[count%n] == 'W'){
				x -= 1;
			}
		}
		if (x == a && y == b){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
