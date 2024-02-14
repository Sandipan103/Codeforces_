#include <bits/stdc++.h>
using namespace std;



#define vi vector<int>
#define vvi vector<vi>
#define f(i, s, e)  for(int i=s; i<e; i++)



int findCycle(int n, vvi &adj) {
  vi indeg(n, 0), topo;

  f(u, 0, n)  
    for(auto v : adj[u])  indeg[v]++;
  
  queue<int> q;
  f(i, 0, n)
    if(indeg[i] == 0) q.push(i);
  
  while(!q.empty()) {
    int u = q.front();
    q.pop();
    topo.push_back(u);
    for(auto v : adj[u])  {
      indeg[v]--;
      if(indeg[v] == 0)
        q.push(v);
    }
  }

  return topo.size() == n;
}


void Sandipan()    {
    
    int n, k;
    cin >> n >> k;
    vvi v(k, vi(n));
    f(i, 0, k)  f(j, 0, n)  
          cin >> v[i][j], v[i][j]--;
    vvi adj(n);
    f(i, 0, k)  f(j, 2, n)
          adj[v[i][j-1]].push_back(v[i][j]);
    if(findCycle(n, adj)) cout << "YES" << endl;
    else  cout << "NO" << endl;

}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}