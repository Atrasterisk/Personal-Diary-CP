#include <bits/stdc++.h>
using namespace std;

vector<int> select;
vector<int> cost;

vector <vector <int> > mat;

int comp(int a, int b){
	if (a >= b){
		return a;
	} else {
		return b;
	}
}

int main(){
	int n; cin >> n;
	int k; cin >> k;
	
	int tot = 0;
	
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		select.push_back(x);
	}
	
	for (int j = 0; j < n; j++){
		int y; cin >> y;
		cost.push_back(y);
		mat.push_back(select, cost);
	}
	
	
	
	
	
	
	
	
	return 0;
}
