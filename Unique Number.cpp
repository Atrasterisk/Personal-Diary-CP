#include <bits/stdc++.h>
using namespace std;

bool binarysearch(int n, const vector<int>& vect, int depan, int belakang){

	if (depan > belakang){
		return false;
	}
	int mid = depan + (belakang - depan)/2;
	if (n == vect[mid]){
		return true;
	} else if ((n > vect[mid])){
		return binarysearch(n, vect, mid + 1, belakang);
	} else{
		return binarysearch(n, vect, depan, mid - 1);
	}
}

void loopkurang (int x, vector<int>& vect){
	bool found = false;
	for (int i = 9; i > 0; i--){
		if (x - i >= 0){
			x = x - i;
			if (binarysearch(i, vect,0, vect.size() - 1)){
				cout << -1;
				break;
			} else {
				if (x < *vect.begin()){
					vect.insert(vect.begin(), i);
				} else {
					vect.push_back(i);
				}
			}
		}
	}
}

int main(){
	int t; cin >> t;
	for (int i = 0; i < t; i++){
		int x; cin >> x;
		vector<int> vect;
		loopkurang(x, vect);
		for (int i = 0; i < vect.size(); i++){
			cout << vect[i];
		}
		cout << endl;
		vect.clear();
	}
	
	return 0;
}
