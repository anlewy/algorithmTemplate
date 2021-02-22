//
// @author anlewy@qq.com 
// @create 2021/2/22 8:03 下午
//

#include <iostream>
#include <fstream>
#include "algos.h"
#include "gtest/gtest.h"
using namespace std;

vector<vector<pair<int, int>>> readGraph(string filename) {
    if (filename == "") {
        filename = "../source/graph_input_1.in";
    }
    ifstream infile(filename);
    int n, m;
    infile >> n >> m;
    vector<vector<pair<int, int>>> graph = vector<vector<pair<int, int>>>(n, vector<pair<int, int>>());
    for (int i = 0; i < m; i++) {
        int u, v, w;
        infile >> u >> v >> w;
        graph[u].push_back(make_pair(v, w));
    }
//    for (int u = 0; u < m; u++) {
//        for (int j = 0; j < graph[u].size(); j++) {
//            cout << u << " --> " << graph[u][j].first << " : " << graph[u][j].second << endl;
//        }
//    }
    return graph;
}

TEST(testCase, testDijkstra) {
    auto graph = readGraph("");
    int src = 0;
    int dst = 4;
    int res = dijkstra(graph, src, dst);
    cout << src << " --> " << dst << "  :  " << res << endl;
}

TEST(testCase, testDijkstraV2) {
    auto graph = readGraph("");
    int src = 0;
    int dst = 4;
    int res = dijkstraV2(graph, src, dst);
    cout << src << " --> " << dst << "  :  " << res << endl;
}


int main() {

    return RUN_ALL_TESTS();
}