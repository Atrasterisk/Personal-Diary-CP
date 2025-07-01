#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++){
		string screen1;
		string screen2;
		
		getline(cin, screen1);
		getline(cin, screen2);
		
		int len; // panjang string terkecil
		if (screen1.length() < screen2.length()){
			len = screen1.length();
		} else {
			len = screen2.length();
		}
		
		int tot = 0;
		for (int ii = 0; ii < len; ii++){
			if (screen1[ii] == screen2[ii]){
				tot++;
			} else {
				break;
			}
		}
		
		int sisa1 = screen1.length() - tot;
        int sisa2 = screen2.length() - tot;
        
        if (tot > 1){
			cout << tot + 1 + sisa1 + sisa2 << endl;	
		} else {
			cout << screen1.length() + screen2.length() << endl;
		}
	}
	
	
	return 0;
}

