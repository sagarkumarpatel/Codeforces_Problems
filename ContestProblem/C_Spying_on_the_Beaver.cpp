#include <bits/stdc++.h>
using namespace std;
#define int long long

void sagFun() {
    int n;
    cin >> n;

    vector<int> parnt(n + 1);

    for (int i = 2; i <= n; i++)
        cin >> parnt[i];

    int m;
    cin >> m;

    vector<bool> dam(n + 1, false);

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        dam[x] = true;
    }

    vector<bool> conDam(n + 1, false);
    vector<vector<int>> cildrn(n + 1);
    vector<int> camr;

    for (int nd = n; nd >= 1; nd--) {

        if (dam[nd]) {
            conDam[nd] = true;
            for (int cld : cildrn[nd])
                camr.push_back(cld);
        }
        else if (!cildrn[nd].empty()) {
            conDam[nd] = true;
            for (int j = 1; j < (int)cildrn[nd].size(); j++)
                camr.push_back(cildrn[nd][j]);
        }
        if (nd > 1 && conDam[nd])
            cildrn[parnt[nd]].push_back(nd);
    }

    cout << camr.size();

    for(int i=0;i<camr.size();i++){
        cout<< " " <<camr[i];
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testcases;
    cin >> testcases; //number of testcases;

    while (testcases--){
        sagFun();
    }
    return 0;
}