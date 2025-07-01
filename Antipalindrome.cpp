#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	
	int count = 0;
	
	int begin = 0;
	int end = int(s.length()) - 1;
	
	
	while (begin < end){
		if (s[begin] != s[end]){
			count++;
		}
		begin++;
	}
	
	if (count != 0 && (begin == end) || (end%2 == 1 && begin == end - 1)){
		count++;
	}
	
	cout << count;
	
	return 0;
}
