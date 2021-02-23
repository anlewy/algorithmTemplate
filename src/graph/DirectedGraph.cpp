//
// @author anlewy@qq.com 
// @create 2021/2/23 10:46 上午
//

#include "graph.h"
#include <fstream>
#include <vector>
#include <string>

DirectedGraph::DirectedGraph(std::string filename) {
    std::ifstream infile(filename);
    infile >> nodeNum >> edgeNum;  // n 是节点数量，编号0, 1, ..., n-1。 m是边的数量
    adj = std::vector<std::vector<Edge>>(nodeNum, std::vector<Edge>(0));
    int from, to, weight;
    for (int i = 0; i < edgeNum; i++) {
        infile >> from >> to >> weight;
        adj[from].push_back(Edge(from, to, weight));
    }
}

std::vector<Edge> DirectedGraph::getEdges(int u) {
    if (u < 0 || u >= nodeNum) {
        return std::vector<Edge>(0);
    }
    return adj[u];
}