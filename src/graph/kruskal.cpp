//
// @author anlewy@qq.com 
// @create 2021/2/23 12:43 下午
//

#include <vector>
#include <queue>
#include "graph.h"

// 并查集
struct UnionFindSet {
    int size;
    std::vector<int> father;
    UnionFindSet(int size): size(size) {
        father = std::vector<int>(size, -1);
        for (int i = 0; i < size; i++) {
            father[i] = i;
        }
    }

    int getGroup(int u) {
        if (father[u] == u)
            return u;
        return father[u] = getGroup(father[u]);
    }

    bool inSameGroup(int u, int v) {
        return getGroup(u) == getGroup(v);
    }

    void unionGroup(int u, int v) {
        father[getGroup(u)] = getGroup(v);
    }
};


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