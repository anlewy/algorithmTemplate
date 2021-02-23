//
// @author anlewy@qq.com 
// @create 2021/2/23 11:34 下午
//

#include <queue>
#include "graph.h"

// bfs求从src出发到各点的距离（无权或单位权重图）
std::vector<int> bfs(Graph &graph, int src) {
    int n = graph.getNodeNum();
    std::vector<bool> been(n, false);
    std::vector<int> dist(n, INFINITY);

    std::queue<int> Q;
    Q.push(src);
    dist[src] = 0;
    been[src] = true;

    while (!Q.empty()) {
        int u = Q.front(); Q.pop();
        for (auto edge : graph.getNodeEdges(u)) {
            if (!been[edge.to]) {
                been[edge.to] = true;
                dist[edge.to] = dist[edge.from] + 1;
                Q.push(edge.to);
            }
        }
     }

    return dist;
}