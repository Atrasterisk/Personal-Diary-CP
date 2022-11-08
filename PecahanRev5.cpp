#include<bits/stdc++.h>
using namespace std;

vector<int> vect;
vector<int> nilai;

int main(){
	for (int i = 0; i < 1; i++){
		int a; cin >> a;
		int b; cin >> b;
		int c; cin >> c;
		int d; cin >> d;
		int e = (a * d) / (b * c);
		int f = (a * d) % (b * c);
		if (e == 0){
			printf("lebih kecil");
		}
		else if (e == 1 and f == 0){
			printf("sama");
		}
		else{
			printf("lebih besar");
		}
	}
	return 0;
}
	

