//
// @author anlewy@qq.com 
// @create 2021/2/23 8:46 下午
//

#include <vector>
#include <set>
#include <map>
#include "graph.h"
#include "algos.h"

struct ConnCompResult {
    bool allConnected;
    int connCompNum;  // 连通分量个数
    std::vector<std::vector<int>> components;
};

// 判断u, v是否连通
bool isConnected(Graph &graph, int u, int v) {
    int n = graph.getNodeNum();
    UnionFindSet ufs(n);
    for (auto edge : graph.getEdges()) {
        ufs.unionGroup(edge.from, edge.to);
    }
    return ufs.inSameGroup(u, v);
}

ConnCompResult ConnComp(Graph &graph) {
    int n = graph.getNodeNum();
    UnionFindSet ufs(n);
    for (auto edge : graph.getEdges()) {
        ufs.unionGroup(edge.from, edge.to);
    }
    std::map<int, std::vector<int>> cnt;
    for (int i = 0; i < n; i++) {
        cnt[ufs.getGroup(i)].push_back(i);
    }

    ConnCompResult res;
    res.allConnected = (cnt.size() == 1);
    res.connCompNum = cnt.size();
    for (auto pp : cnt) {
        res.components.push_back(pp.second);
    }
    return res;
}