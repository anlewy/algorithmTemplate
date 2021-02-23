//
// @author anlewy@qq.com 
// @create 2021/2/23 11:51 下午
//


#include <vector>
#include "graph.h"

void dfsHelper(Graph &graph, int u, std::vector<int> &vec, std::vector<bool> &been) {
    been[u] = true;
    vec.push_back(u);
    for (auto edge : graph.getNodeEdges(u)) {
        if (!been[edge.to]) {
            dfsHelper(graph, edge.to, vec, been);
        }
    }
}

std::vector<std::vector<int>> dfs(Graph &graph) {
    int n = graph.getNodeNum();
    std::vector<std::vector<int>> res;
    std::vector<bool> been(n, false);
    for (int i = 0; i < n; i++) {
        if (!been[i]) {
            std::vector<int> vec;
            dfsHelper(graph, i, vec, been);
            res.push_back(vec);
        }
    }
    return res;
}

