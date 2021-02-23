//
// @author anlewy@qq.com 
// @create 2021/2/23 12:43 下午
//

#include <vector>
#include <queue>
#include "graph.h"
#include "algos.h"


int kruskal(Graph &graph) {
    int n = graph.getNodeNum();
    auto ufs = UnionFindSet(n);
    std::priority_queue<Edge, std::vector<Edge>, std::greater<Edge> > PQ;
    for (auto edge : graph.getEdges()) {
        PQ.push(edge);
    }

    int ans = 0;
    while (!PQ.empty()) {
        auto edge = PQ.top(); PQ.pop();
        if (!ufs.inSameGroup(edge.from, edge.to)) {
            ufs.unionGroup(edge.from, edge.to);
            ans += edge.weight;
        }
    }

    return ans;
}