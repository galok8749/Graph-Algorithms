#include <bits/stdc++.h>
using namespace std;

int main() {
	/* n is number of nodes
	   m is number of edges 
	*/
	int n, m;

	cin >> n >> m;

	vector<int> adj[n+1]; /* 1 based indexing */

	for(int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	/* in case of weightage graph */

	// vector<pair<int,int> > adj[n+1]; /* 1 based indexing */

	// for(int i = 0; i < m; i++) {
	// 	int u, v, w;
	// 	cin >> u >> v >> w;

	// 	adj[u].push_back({v, w});
	// 	adj[v].push_back({u, w});
	// }


	return 0;
}