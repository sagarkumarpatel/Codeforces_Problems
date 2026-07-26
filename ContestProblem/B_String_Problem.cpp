#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    if (s.size() != t.size()) {
        cout << -1 << '\n';
        return 0;
    }

    vector<vector<int>> cost(26, vector<int>(26, INF));

    for (int i = 0; i < 26; i++) {
        cost[i][i] = 0;
    }

    int m;
    cin >> m;

    while (m--) {
        char from, to;
        int w;
        cin >> from >> to >> w;

        int u = from - 'a';
        int v = to - 'a';

        cost[u][v] = min(cost[u][v], w);
    }

    for (int k = 0; k < 26; k++) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                if (cost[i][k] == INF || cost[k][j] == INF)
                    continue;

                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
            }
        }
    }

    long long totalCost = 0;
    string answer;

    for (int i = 0; i < (int)s.size(); i++) {

        int a = s[i] - 'a';
        int b = t[i] - 'a';

        int bestCost = INF;
        char bestChar = 'a';

        for (int c = 0; c < 26; c++) {

            if (cost[a][c] == INF || cost[b][c] == INF)
                continue;

            int currentCost = cost[a][c] + cost[b][c];

            if (currentCost < bestCost) {
                bestCost = currentCost;
                bestChar = char('a' + c);
            }
        }

        if (bestCost == INF) {
            cout << -1 << '\n';
            return 0;
        }

        totalCost += bestCost;
        answer += bestChar;
    }

    cout << totalCost << '\n';
    cout << answer << '\n';

    return 0;
}