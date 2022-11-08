#include<bits/stdc++.h>
using namespace std;

int main(){
	string QA = "QA";
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		int que = 0;
		int x; cin >> x;
		string s; cin >> s;
		for (int j = 0; j < x; j++){
			if (s[j] == QA[0]){
				que = que + 1;
			}
			else{
				if (que == 0){
					que = que;
				}
				else{
					que = que - 1;
				}
			}
		}
		if (que == 0){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
