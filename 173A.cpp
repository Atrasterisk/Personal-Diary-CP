#include <bits/stdc++.h>

using namespace std;

void solve(string x, string y, int n){
    int a = 0, b = 0;
    int nx, ny, L;
    nx = x.size();
    ny = y.size();
    L = lcm(nx, ny);
    char ca, cb;
    for (int i = 0; i < L; i++){
        ca = x[i%x.size()];
        cb = y[i%y.size()];

        if (ca == cb){
            continue;
        } else if ((ca == 'R' && cb == 'S') || (ca == 'S' && cb == 'P') || (ca == 'P' && cb == 'R')) {
            b++;
        } else {
            a++;
        }
    }
    b = b * (n/L);
    a = a * (n/L);
    for (int i = 0; i < (n%L); i++){
        ca = x[i%x.size()];
        cb = y[i%y.size()];

        if (ca == cb){
            continue;
        } else if ((ca == 'R' && cb == 'S') || (ca == 'S' && cb == 'P') || (ca == 'P' && cb == 'R')) {
            b++;
        } else {
            a++;
        }
    }
    cout << a << " " << b;
}

int main(){
    int n; cin >> n;
    string x,y; cin >> x >> y;
    solve(x, y, n);
}
