#include <iostream>
#include <vector>
using namespace std;

/*原始无序图
0 -- 1 -- 2
|         |
4 ------- 3
*/

vector<vector<int>> graph = {
    {1, 4},
    {0, 2},
    {1, 3},
    {2, 4},
    {0, 3},
}

















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
