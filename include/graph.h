//
// @author anlewy@qq.com 
// @create 2021/2/22 8:25 下午
//

#ifndef ALGORITHMTEMPLATE_GRAPH_H
#define ALGORITHMTEMPLATE_GRAPH_H

#include <vector>
#include <string>

// 结构定义

struct Edge {
    int from, to;
    int weight;
    Edge():from(-1), to(-1), weight(-1) {}
    Edge(int from, int to, int weight): from(from), to(to), weight(weight) {}
    bool operator>(const Edge &x) const {
        return this->weight > x.weight;
    }
    bool operator<(const Edge &x) const {
        return this->weight < x.weight;
    }
};

struct Path {
    int src, dst;
    int dist;
    Path() {}
    Path(int src, int dst, int dist): src(src), dst(dst), dist(dist) { }
    bool operator>(const Path &x) const {
        return this->dist > x.dist;
    }
    bool operator<(const Path &x) const {
        return this->dist < x.dist;
    }
};

class Graph {
private:
    int nodeNum;
    int edgeNum;
    bool directed;
    bool weighted;
    std::vector<std::vector<Edge>> adj;
    std::vector<Edge> edges;

public:
    Graph() {}

    // 若未指定有向性、带权性，默认为有向图、带权图
    Graph(std::string filename): Graph(filename, true, true) { }

    // 若未指定是否带权，默认为带权图
    Graph(std::string filename, bool directed): Graph(filename, directed, true) { }

    Graph(std::string filename, bool directed, bool weighted);

    std::vector<Edge> getNodeEdges(int u);
    std::vector<Edge> getEdges();
    int getNodeNum() { return nodeNum; }
    int getEdgeNum() { return edgeNum; }
    bool isDirected() { return directed; }
    bool isWeighted() { return weighted; }
};



// 函数声明

// 最短路径算法
int dijkstra(Graph &graph, int src, int dst);
int dijkstraV2(Graph &graph, int src, int dst);

// 最小生成树算法
int kruskal(Graph &graph);
int prim(Graph &graph);

#endif //ALGORITHMTEMPLATE_GRAPH_H
