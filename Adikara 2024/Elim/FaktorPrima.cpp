#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	while (n % 2 == 0){
		cout << 2;
		n = n / 2;
		if(n > 1){
			cout << " x ";
		}
	} while (n % 3 == 0){
		cout << 3;
		n = n / 3;
		if(n > 1){
			cout << " x ";
		}
	} while (n % 5 == 0){
		cout << 5;
		n = n / 5;
		if(n > 1){
			cout << " x ";
		}
	} for (int i = 5; i <= n; i++){
		while (n % i == 0){
			cout << i;
			n = n / i;
			if(n > 1){
				cout << " x ";
			}
		} 
		while (n % (i+2) == 0){
			cout << (i+2);
			n = n / (i+2);
			if(n > 1){
				cout << " x ";
			}
		}
	}
	return 0;
}
