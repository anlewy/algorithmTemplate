//
// @author anlewy@qq.com 
// @create 2021/2/23 2:12 下午
//

#include <queue>
#include <vector>
#include "graph.h"

int prim(Graph &graph) {
    int n = graph.getNodeNum();
    int start = 0;
    std::vector<bool> in = std::vector<bool>(n, false);
    std::priority_queue<Edge, std::vector<Edge>, std::greater<Edge> > PQ;
    in[start] = true;
    for (auto edge : graph.getNodeEdges(start)) {
        PQ.push(edge);
    }

    int ans = 0;
    while (!PQ.empty()) {
        auto edge = PQ.top(); PQ.pop();
        if (!in[edge.to]) {
            in[edge.to] = true;
            ans += edge.weight;
            for (auto e : graph.getNodeEdges(edge.to)) {
                PQ.push(e);
            }
        }
    }

    return ans;
}