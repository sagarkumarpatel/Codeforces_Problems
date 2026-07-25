#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<bool> visited(n + 1, false);
    priority_queue<int, vector<int>, greater<int>> pq;
    
    // Start from node 1
    visited[1] = true;
    pq.push(1);
    
    vector<int> answer;
    
    while (!pq.empty()) {
        int node = pq.top();
        pq.pop();
        answer.push_back(node);
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                pq.push(neighbor);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    
    return 0;
}