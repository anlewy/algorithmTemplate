//
// @author anlewy@qq.com 
// @create 2021/2/22 7:20 下午
//

#include <vector>
#include <queue>
#include "graph.h"

const int INF = 0x3f3f3f3f;

// 对图的唯一要求是，能遍历某指定点的所有边
int dijkstra(DirectedGraph &graph, int src, int dst) {
    int n = graph.getNodeNum();
    std::vector<int> dist(n, INF);
    std::vector<bool> been(n, false);
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        been[i] = false;
    }
    dist[src] = 0;
    been[src] = true;
    for (auto edge : graph.getEdges(src)) {
        dist[edge.to] = edge.weight;
    }

    for (int i = 0; i < n; i++) {
        int minV = INF;
        int minP = -1;
        for (int j = 0; j < n; j++) {
            if (!been[j] && dist[j] < minV) {
                minP = j;
                minV = dist[j];
            }
        }
        if (minP == -1)
            break;
        been[minP] = true;
        for (auto edge : graph.getEdges(minP)) {
            int v = edge.to;
            int w = edge.weight;
            if (dist[minP] + w < dist[v]) {
                dist[v] = dist[minP] + w;
            }
        }
    }

    return dist[dst] == INF ? -1 : dist[dst];
}


int dijkstraV2(DirectedGraph &graph, int src, int dst) {
    int n = graph.getNodeNum();
    std::vector<int> dist(n, INF);
    std::vector<bool> been(n, false);
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        been[i] = false;
    }
    dist[src] = 0;
    been[src] = true;

    std::priority_queue<Path, std::vector<Path>, std::greater<Path> > PQ;
    for (auto edge : graph.getEdges(src)) {
        dist[edge.to] = edge.weight;
        PQ.push(Path(src, edge.to, edge.weight));
    }

    while (!PQ.empty()) {
        auto path = PQ.top(); PQ.pop();
        if (been[path.dst]) {
            continue;
        }
        been[path.dst] = true;
        for (auto edge : graph.getEdges(path.dst)) {
            if (dist[path.dst] + edge.weight < dist[edge.to]) {
                dist[edge.to] = dist[path.dst] + edge.weight;
                PQ.push(Path(src, edge.to, dist[edge.to]));
            }
        }
    }

    return dist[dst] == INF ? -1 : dist[dst];
}