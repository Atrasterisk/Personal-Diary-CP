#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	for (int i = 0; i < t; i++){
		int s; cin >> s;
		int count = 0;
		int y = log10(s);
		while (s > 0){
			div_t res = div(s, pow(10,y));
			count = count + res.quot*pow(10,y);
			s = s - (res.quot)*pow(10,y) + (res.quot)*pow(10,y-1);
			if (s < pow(10,y)){
				y--;
			}
		}
		cout << count << endl;
	}
	return 0;
}
