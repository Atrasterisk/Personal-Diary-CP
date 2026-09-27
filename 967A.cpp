#include <bits/stdc++.h>
using namespace std;

deque<int> q;

int main() {
    int n, s, h, m;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        cin >> h >> m;
        q.push_back(h*60+m);
    }
    if (s < q[0]){
        cout << 0 << " " << 0;
        return 0;
    }
    for(int i = 0; i < n - 1; i++){
        if (q[i] + 2*s + 1 < q[i+1]){
            cout << (q[i] + s + 1) / 60 << " " << (q[i] + s + 1) % 60;
            return 0;
        }
    }
    cout << (q.back() + s + 1) / 60 << " " << (q.back() + s + 1) % 60;
}