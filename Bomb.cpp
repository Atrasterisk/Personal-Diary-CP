#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	int x; cin >> x;
	int y; cin >> y;
	int n; cin >> n;
	vector<float> length;
	for (int i = 0; i < n; i++){
		int a; cin >> a;
		int b; cin >> b;
		float d = sqrt((pow((x - (a)) , 2))+(pow((y - (b)) , 2)));
		length.push_back(d);
	}
	int q; cin >> q;
	for (int j = 0; j < q; j++){
		float  r; cin >> r;
		int num = 0;
		for (int k = 0; k < n; k++){
			if (length[k] <= r){
				num = num + 1;
			}
			if (length[k] > r){
				num = num;
			}
		}
		cout << num << endl;
	}
	return 0;
}
