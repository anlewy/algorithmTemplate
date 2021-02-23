//
// @author anlewy@qq.com 
// @create 2021/2/23 10:46 上午
//

#include "graph.h"
#include <fstream>
#include <vector>
#include <string>

Graph::Graph(std::string filename) {
    std::ifstream infile(filename);
    infile >> nodeNum >> edgeNum;  // n 是节点数量，编号0, 1, ..., n-1。 m是边的数量
    adj = std::vector<std::vector<Edge>>(nodeNum, std::vector<Edge>(0));
    int from, to, weight;
    for (int i = 0; i < edgeNum; i++) {
        infile >> from >> to >> weight;
        auto edge = Edge(from, to, weight);
        edges.push_back(edge);
        adj[from].push_back(edge);
    }
}

Graph::Graph(std::string filename, bool directed) {
    if (directed) {
        Graph(filename);
    } else {
        std::ifstream infile(filename);
        infile >> nodeNum >> edgeNum;  // n 是节点数量，编号0, 1, ..., n-1。 m是边的数量
        adj = std::vector<std::vector<Edge>>(nodeNum, std::vector<Edge>(0));
        int u, v, weight;
        for (int i = 0; i < edgeNum; i++) {
            infile >> u >> v >> weight;
            auto edge = Edge(u, v, weight);
            edges.push_back(edge);
            adj[u].push_back(edge);
            adj[v].push_back(edge);

        }
    }
}

std::vector<Edge> Graph::getEdges() {
    return edges;
}

std::vector<Edge> Graph::getNodeEdges(int u) {
    if (u < 0 || u >= nodeNum) {
        return std::vector<Edge>(0);
    }
    return adj[u];
}