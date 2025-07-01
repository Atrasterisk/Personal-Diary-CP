#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int k; cin >> k;
	
	vector<int> vect;
	for (int z = 0; z < k; z++){
		vect.push_back(z);
	}
	for (int i = 0; i < n; i++){
		for (int ii = 0; ii < k; ii++){
			int a; cin >> a;
			if (a == 1){
				vect[ii]++;
			}
			
		}
	}
	return 0;
}
