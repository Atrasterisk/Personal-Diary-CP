#include <bits/stdc++.h>
using namespace std;

int main(){
	int x; cin >> x;
	for (int i = 0; i < x; i++){
		int a; cin >> a;
		while (a >= 0){
			if (a < 2020){
				cout << "NO";
				break; 
			} else if (a == 2020 || a == 2021){
				cout << "YES";
				break;
			} else {
				if ((a - 2021) % 2020 == 0 || (a - 2021) % 2021 == 0){
					a = a - 2021;
				} else {
					a = a - 2020;
				}
			}
		}
		if (i < x-1){
			cout << endl;
		}
	}
	return 0;
}
