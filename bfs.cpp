#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int nodes, vector<int> adj[]) {
	vector<int> bfsNode;

	vector<int> isVisited(nodes+1, 0);

	for(int i = 1; i <= nodes; i++) {
		if(!isVisited[i]) {

			queue<int> q;
			q.push(i);
			isVisited[i] = 1;

			/* traverse all adj of node i and push into queue*/
			
			while(!q.empty()) {
				int u = q.front();
				q.pop();
				bfsNode.push_back(u);

				for(auto v : adj[u]) {
					if(!isVisited[v]) {
						q.push(v);
						isVisited[v] = 1;
					}
				}
			}
		}
	}

	return bfsNode;
}
