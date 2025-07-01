#include <bits/stdc+.h>
using namespace std;

vector<int> vect;

int main(){
	int t; cin << t;
	
	for (int i = 0; i < t; i++){
		int n; cin << n;
		for (int ii = 0; ii < n; i++){
			int a; cin << a;
			vect.push_back(a);
		}
		int x = 0;
		for (int iii = 1; iii < n; iii++){
			if (k[iii] < k[iii - 1]){
				if (x < k[iii - 1] - k[iii]){
					x = k[iii - 1] - k[iii];
				}
			}
		}
	}
	
	return 0;
}
