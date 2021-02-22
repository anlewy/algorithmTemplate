//
// @author anlewy@qq.com 
// @create 2021/2/22 7:20 下午
//

#include <vector>
#include "graph.h"

int dijkstra(std::vector<std::vector<std::pair<int, int>>> &graph, int src, int dst) {
    int n = graph.size();
    const int INF = 0x3f3f3f3f;
    std::vector<int> dist(n, INF);
    std::vector<bool> been(n, false);
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        been[i] = false;
    }
    dist[src] = 0;
    been[src] = true;
    for (auto edge : graph[src]) {
        dist[edge.first] = edge.second;
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
        for (auto edge : graph[minP]) {
            int v = edge.first;
            int w = edge.second;
            if (dist[minP] + w < dist[v]) {
                dist[v] = dist[minP] + w;
            }
        }
    }

    return dist[dst] == INF ? -1 : dist[dst];
}