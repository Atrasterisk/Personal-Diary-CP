#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, s; cin >> a >> s;
    sort(s.begin(), s.end(), greater<char>());
    int n = s.size();
    int count = 0;
    int size = a.size();
    int i = 0;
    while (i < n && count < size){
        if (int(a[count]) < int(s[i])){
            a[count] = s[i];
            count++;
            i++;
        } else {
            count++;
        }
    }
    cout << a;
    return 0;
}