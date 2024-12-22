#include <iostream>
#include <cstdio>

#define INF 1000000000
#define MAXN 100
using namespace std;

void initializeGraph(int graph[MAXN][MAXN], int n) {
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            graph[i][j] = INF;
        }
    }
}

void readEdges(int graph[MAXN][MAXN], int m) {
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u][v] = w;
    }
}

void floydWarshall(int graph[MAXN][MAXN], int n) {
     for(int i=0; i<n ;i++){
        for(int j = 0 ; j<n ;j++){
            for(int k = 0 ; k<n ;k++){
                    if(graph[j][i] < INF && graph[i][k] < INF &&
                        graph[j][k] > graph[j][i] + graph[i][k] )
                            graph[j][k] = graph[j][i] + graph[i][k];
            }
        }
    }
}

void printResult(int graph[MAXN][MAXN], int source, int sink) {
    if(graph[source][sink] == INF && source != sink)
        cout<<"Nodes are unreachable. Maximum flow is 0.";
    else cout<<"Maximum flow from node "<<source<<" to "<<sink<<" is: "<<graph[source][sink];
}

int main() {
    int n, m;
    std::cin >> n >> m;

    int graph[MAXN][MAXN];
    initializeGraph(graph, n);
    readEdges(graph, m);

    int source, sink;
    std::cin >> source >> sink;

    floydWarshall(graph, n);
    printResult(graph, source, sink);

    return 0;
}