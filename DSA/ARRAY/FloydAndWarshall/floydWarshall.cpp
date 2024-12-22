#include <iostream>
using namespace std;

void floydWarshall(int **graph, int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            for(int k = 0 ; k<n ; k++){
                if(graph[j][k] > graph[j][i] + graph[i][k])
                    graph[j][k] = graph[j][i] + graph[i][k];
            }
        }
    }
}



int main(){
    int n, i, j;
    cin >> n;

    int **graph = new int *[n];

    for (i = 0; i < n; i++){
        graph = new int[n];
    }
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = 100;
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cin >> graph[i][j];
        }
    }

    floydWarshall(graph, n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
