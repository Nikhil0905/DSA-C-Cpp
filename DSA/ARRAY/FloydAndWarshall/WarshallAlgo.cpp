#include <iostream>
using namespace std;
void computeReachability(int **graph, int n) {
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            for(int k = 0 ; k<n ; k++){
                graph[j][k] = graph[j][k] || (graph[j][i] && graph[i][k]);
            }
        }
    }
}


int main() {
    int n;
    cin >> n;
    int **graph = new int *[n];
    for (int i = 0; i < n; ++i) {
        graph[i] = new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }
    computeReachability(graph, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i) {
        delete[] graph[i];
    }
    delete[] graph;
    return 0;
}
