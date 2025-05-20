#include <bits/stdc++.h>
using namespace std;

void solve(){
    unordered_map<string, int> mapa;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string x;
        cin >> x;
        if (mapa.find(x) == mapa.end()) {
            cout << "OK" << endl;
            mapa[x] = 1;
        }
        else {
            string newX = x + to_string(mapa[x]);
            cout << newX << endl;
            mapa[x]++;
            mapa[newX] = 1;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
