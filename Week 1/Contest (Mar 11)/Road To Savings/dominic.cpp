/*
  Solved after contest
  
  Note: Using LL defensively, integer should be able
    to easily hold the total of weights (assuming 
    max roads is 100 and max weight is 100).
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef pair<int, int> pii;

int main() {
  int n, m, s, e, l, r, w;
  cin >> n >> m >> s >> e;
  n++;
  vector<vector<pii>> graph(n);

  // Creating adj list & getting total from weights
  LL total = 0;
  while (m--) {
    cin >> l >> r >> w;
    graph[l].emplace_back(r, w);
    graph[r].emplace_back(l, w);
    total += w;
  }

  // Dijkstra (SS -> All dest)
  vector<int> dist(n, 1e9);
  dist[s] = 0;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.emplace(0, s);

  while (!pq.empty()) {
    auto [d, i] = pq.top();
    pq.pop();
    if (d != dist[i]) continue;
    if (i == e) continue;
    
    for (auto &[j, w] : graph[i]) {
      if (dist[j] > dist[i]+w) {
        dist[j] = dist[i]+w;
        pq.emplace(dist[j], j);
      }
    }
  }

  // Backtrace using min dest info
  queue<pii> q;
  LL res = 0;
  q.emplace(dist[e], e);
  while (!q.empty()) {
    auto [d, i] = q.front();
    q.pop();
    if (i == s) continue;

    for (auto &[j, w] : graph[i]) {
      if (dist[j] != dist[i]-w) continue;
      res += w;
      q.emplace(dist[j], j);
    }
  }

  // Total weights - shortest paths' weights
  cout << total-res << endl;
  return 0;
}
