//
// @author anlewy@qq.com 
// @create 2021/2/23 10:46 上午
//

#include "graph.h"
#include <fstream>
#include <vector>
#include <string>

Graph::Graph(std::string filename, bool directed, bool weighted) {
    this->directed = directed;
    this->weighted = weighted;

    std::ifstream infile(filename);
    infile >> this->nodeNum >> this->edgeNum;  // n 是节点数量，编号0, 1, ..., n-1。 m是边的数量
    adj = std::vector<std::vector<Edge>>(this->nodeNum, std::vector<Edge>(0));
    int u, v, weight;
    for (int i = 0; i < this->edgeNum; i++) {
        infile >> u >> v;
        if (weighted) {  // 如果有权，则从文件读入权重
            infile >> weight;
        } else {
            weight = 1;  // 如果无权，则为单位权重
        }
        edges.push_back(Edge(u, v, weight));
        adj[u].push_back(Edge(u, v, weight));
        if (!directed) {  // 如果为无向图，则邻边是双向的
            adj[v].push_back(Edge(v, u, weight));
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