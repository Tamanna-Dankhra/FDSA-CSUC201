
#include <bits/stdc++.h>
using namespace std;

void DFS(int node, vector<int> adj[], vector<int>& visited) {
    visited[node] = 1;
    cout << node << " ";

    for (int neighbour : adj[node]) {
        if (visited[neighbour] == 0) {
            DFS(neighbour, adj, visited);
        }
    }
}

void BFS(int start, vector<int> adj[], int n) {
    vector<int> visited(n, 0);
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbour : adj[node]) {
            if (visited[neighbour] == 0) {
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
}

int main() {
    int vertices, edges;

    cout << "Enter number of vertices and edges: ";
    cin >> vertices >> edges;

    vector<int> adj[vertices];

    cout << "Enter the connected vertices (edges):" << endl;

    for (int i = 0; i < edges; i++) {
        int first, second;
        cin >> first >> second;

        adj[first].push_back(second);
        adj[second].push_back(first);
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    vector<int> visited(vertices, 0);

    cout << "DFS: ";
    DFS(start, adj, visited);

    cout << endl;

    cout << "BFS: ";
    BFS(start, adj, vertices);

    return 0;
}
