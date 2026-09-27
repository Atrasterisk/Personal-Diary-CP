#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, free, qmax;
    cin >> n;
    free = 0;
    qmax = 0;
    for (int i = 0; i < n; i++){
        int t, c;
        cin >> t >> c;
        if (free < t){
            free = t;
        }

        int queue = free - t + c;
        if (queue > qmax){
            qmax = queue;
        }
        free += c;
    }
    cout << free << " " << qmax;
}