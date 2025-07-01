#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	string s2 = "hello";
	vector<char> v(s.begin(), s.end());
	vector<char> v2(s2.begin(), s2.end());
	
	bool status = false;
	int search = 0;
	int i = 0;
	while (i <= v.size()){
		if (v[i] == v2[search]){
			search++;
		} if (search == v2.size()){
			status = true;
		}
		i++;
	}
	
	if (status){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}
