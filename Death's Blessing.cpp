#include<bits/stdc++.h>
using namespace std;
 
vector<int> cost;
vector<int> bless;
vector<vector <int> > mat;

int kill(vector<int> health, vector<int> bless){
	if (health.size() == 1){
		return health[0];
	} else if (health.size() == 2){
		if (health[0] < health[1]){
			return health[0] + health[1] + bless[0];
		} else if (health[0] > health[1]){
			return health[0] + health[1] + bless[1];
		}
	} else {
		for (int k = 0; k < health.size(); k++){
			int x = min (bless[0], bless);
			int it = distance(bless.begin(), find(bless.begin(), bless.end(), x));
			health[(it - 1)] = health[(it - 1)] + bless[it];
			health[(it + 1)] = health[(it + 1)] + bless[it];
			bless.erase(bless.begin() + it);
			time = time + health[it];
			health.erase(health.begin() + it);
		}
	}
}
 
int main(){
	int n; cin >> n;
	
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		for (int j = 0; j < x; j++){
			int y; cin >> y;
			vect.push_back(y);
		}
		mat.push_back(vect);
		
		for (int k = 0; k < x; k++){
			int z; cin >> z;
			vect2.push_back(z);
		}
		mat.push_back(vect2);
	}
	
	
	
	
	return 0;
}
