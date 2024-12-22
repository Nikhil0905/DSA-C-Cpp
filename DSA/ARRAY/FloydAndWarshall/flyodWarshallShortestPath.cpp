#include <iostream>
using namespace std;

#define MAXN 100
int INF = 1e7;

int dis[MAXN][MAXN];
int Next[MAXN][MAXN];
void initialise(int V, int graph[MAXN][MAXN]) {
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(graph[i][j] == 0 && i!=j){
                dis[i][j] = INF;
                Next[i][j] = -1;
            }
            else{
                dis[i][j] = graph[i][j];
                Next[i][j] = j;
            }
        }
    }
}

void floydWarshall(int V) {
   for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            for(int k=0;k<V;k++){
                if(dis[j][i] != INF && dis[i][k] != INF &&
                    dis[j][k] > dis[j][i] + dis[i][k]){
                    dis[j][k] = dis[j][i] + dis[i][k];
                        Next[j][k] = Next[j][i];
                    }
            }   
        }
    }
}

void printPath(int path[], int n) {
    for(int i=0;i<n;i++){
        if(i>0) cout<<" -> ";
        cout<<path[i];
    }
}

int main() {
    int V;
    cin >> V;

    int graph[MAXN][MAXN];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    initialise(V, graph);
    floydWarshall(V);

    int u, v;
    cin >> u;
    cin >> v;

    int path[MAXN];
    path[0] = u;
    int index = 1;
    while (u != v) {
        u = Next[u][v];
        path[index++] = u;
    }

    cout << "Shortest path from " << path[0] << " to " << path[index - 1] << ": ";
    printPath(path, index);

    return 0;
}