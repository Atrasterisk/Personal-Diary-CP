#include <bits/stdc++.h>
using namespace std;
 
vector<double>vect;
 
int main() {
    double n, b; cin >> n >> b;
    double sum = b;
    double max = 0;
    for (int i = 0; i < n; i++){
        double x; cin >> x;
        sum += x;
        if (max < x){
            max = x;
        }
        vect.push_back(x);
    }
    double avg = (sum / n);
    if (avg < max){
        cout << -1;
    } else {
        for (int i = 0; i < n; i++){
            cout << fixed << setprecision(6) << (avg - vect[i]) << endl;
        }
    }
    return 0;
}