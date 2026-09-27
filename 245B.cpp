#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, x, ru; cin >> s;
    int t;
    if (s.substr(0,3) == "ftp"){
        x = s.substr(0,3) + "://";
        t = 5;
        s.erase(0, 3);
        s = x + s;
    } else if (s.substr(0,4) == "http") {
        x = s.substr(0,4) + "://";
        t = 6;
        s.erase(0, 4);
        s = x + s;
    }
    for (int i = t; i < s.size(); i++){
        if (s.substr(i, 2) == "ru" && s.substr(i-1, 1) != "/"){
            x = s.substr(0, i);
            ru = s.substr(i, 2);
            s.erase(0, i+2);
            if (s.empty()){
                s = x + "." + ru;
            } else {
                s = x + "." + ru + "/" + s;
            }
            break;
        }
    }
    cout << s;
    return 0;
}