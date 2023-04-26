#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<vector<int>> &graph, vector<bool> &visited) {
    visited[node] = true;
    cout << "访问节点: " << node << endl;

    for (int i = 0; i < graph[node].size(); i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            DFS(i, graph, visited);
        }
    }
}
int main(){
    
}

int main() {
    vector<vector<int>> graph = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 0, 1, 0},
    };

    vector<bool> visited(graph.size(), false);

    cout << "深度优先搜索遍历结果：" << endl;
    DFS(0, graph, visited);

    return 0;
}
