#include<bits/stdc++.h>
using namespace std;


int main(){
	string s; cin >> s;
	vector<char> vect;
	
	int count;
	count = 0;
	while (count < s.size()){
		char change;
		if (count == 0) {
			change = toupper(s[count]);
		} else {
			change = tolower(s[count]);
		}
		vect.push_back(change);
		count++;
	}
	
	for(int i = 0; i < vect.size(); i++){
		cout << vect[i];
	}
	return 0;
}
