#include <bits/stdc++.h>

using namespace std;
vector<long long> vect;

int op(vector<long long> vect){
	if (vect.size() == 2){
		return 0;
	} else if (vect.size() == 3){
		return 1;
	} else {
		long long a = vect[0];
		long long b = vect[1];
		long long c = vect[2];
		long long d = vect[3];
		long long e = vect[4];
		int va = 0;
		int vb = 0;
		int vc = 0;
		int vd = 0;
		int ve = 0;
		if (a == b){
			if (c == d){
				vect.erase(vect.begin() + 4);
				return 1 + op(vect)
			} else if(c == e){
				vect.erase(vect.begin() + 3);
				return 1 + op(vect)
			} else {
				vect.erase(vect.begin() + 2);
				return 1 + op(vect)
			}
		} if (a == c){
			va++;
		} if (a == d){
			va++;
		} if (a == e){
			va++;
		} if (b == c){
			va++;
		} if (b == d){
			va++;
		} if (b == e){
			va++;
		} if (c == d){
			va++;
		} if (c == e){
			va++;
		} if (d == e){
			va++;
		}
		if (a + b != c + d){
			if (a + b == d + e){
				vect.erase(vect.begin() + 2);
				return 1 + op(vect);
			} else if (b + c == d + e){
				vect.erase(vect.begin());
				return 1 + op(vect);
			}
		} else {
			vect.erase(vect.begin());
			vect.erase(vect.begin());
			return 0 + op(vect);
		}
	}
}
int main(){
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		long long x; cin >> x;
		vect.push_back(x);
	}
	cout << op(vect);
	
}
