/*
//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

void vector<int>shortestpath(vector<pair<int,int>edges, int n, int m , int s, int t){

//adj matrix
unordered_map<int, list<int>> adj;
for(int i=0; i<edges.size(); i++)
{
    int u=edges[i].first;
    int v=edges[i].second;
    adj[u].push_back(v);
    adj[u].push_back(v);

}

//BFS

unordered_map<int, bool>visited;
unordered_map<int, int>parent;
queue<int>q;
q.push(s);
parent[s]=-1;
visited[s]=true;

while(!q.empty())
{
    int front =q.front();
    q.pop();

    for(auto i: adj{front})
    {
        if(!visited[i])
        {
          visited[i]=true;
          parent[i]=front;
          q.push(i);

        }
    }
}

vector<int>ans;
int currentNode=t;
ans.push_back(t);

while(currentNode!=s)
{
    currentNode=parrent[currentNode];
    ans.push_back(currentNode);
}

reverse(ans.begin(),ans.end());
return ans;

}
int main() {
    int n = 5;
    vector<vector<pair>> graph(n);

    // Add edges (u, v, weight)
    graph[0].push_back({1, 4});
    graph[0].push_back({2, 1});
    graph[1].push_back({3, 1});
    graph[2].push_back({3, 2});
    graph[3].push_back({4, 3});

    int source = 0, destination = 4;
    vector<int> path = dijkstra_shortest_path(graph, source, destination);

    if (!path.empty()) {
        cout << "Shortest Path: ";
        for (int node : path)
            cout << node << " ";
        cout << endl;
    } else {
        cout << "No path found." << endl;
    }

    return 0;
}
*/
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

vector<int> bfs_shortest_path(vector<vector<int>> &graph, int s, int t) {
    int n = graph.size();
    vector<int> dist(n, -1), parent(n, -1);
    queue<int> q;

    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node]) {
            if (dist[neighbor] == -1) {  // Unvisited node
                dist[neighbor] = dist[node] + 1;
                parent[neighbor] = node;
                q.push(neighbor);

                if (neighbor == t) {
                    // Manually reconstruct the path using a stack
                    stack<int> path_stack;
                    for (int v = t; v != -1; v = parent[v])
                        path_stack.push(v);

                    vector<int> path;
                    while (!path_stack.empty()) {
                        path.push_back(path_stack.top());
                        path_stack.pop();
                    }
                    return path;
                }
            }
        }
    }

    return {};  // No path found
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},  // Node 0 is connected to 1 and 2
        {0, 3},  // Node 1 is connected to 0 and 3
        {0, 3},  // Node 2 is connected to 0 and 3
        {1, 2, 4},  // Node 3 is connected to 1, 2, and 4
        {3}   // Node 4 is connected to 3
    };

    int source = 0, destination = 4;
    vector<int> path = bfs_shortest_path(graph, source, destination);

    if (!path.empty()) {
        cout << "Shortest Path: ";
        for (int node : path)
            cout << node << " ";
        cout << endl;
    } else {
        cout << "No path found." << endl;
    }

    return 0;
}
