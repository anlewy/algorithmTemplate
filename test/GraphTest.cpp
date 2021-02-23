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
        filename = "../static/graph_input_1.in";
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
    auto graph = Graph("../static/graph_input_1.in");
    int src = 0;
    int dst = 4;
    int res = dijkstra(graph, src, dst);
    cout << src << " --> " << dst << "  :  " << res << endl;
}

TEST(testCase, testDijkstraV2) {
    auto graph = Graph("../static/graph_input_1.in");
    int src = 0;
    int dst = 4;
    int res = dijkstraV2(graph, src, dst);
    cout << src << " --> " << dst << "  :  " << res << endl;
    EXPECT_EQ(res, 13);
}

TEST(testCase, testKruskal) {
    auto graph = Graph("../static/graph_input_1.in", false);
    int res = kruskal(graph);
    cout << "res = " << res << endl;
    EXPECT_EQ(res, 26);
}

TEST(testCase, testPrim) {
    auto graph = Graph("../static/graph_input_1.in", false);
    int res = prim(graph);
    cout << "res = " << res << endl;
    EXPECT_EQ(res, 26);
}

TEST(testCase, testBFS) {
    auto graph = Graph("../static/graph_input_1.in", false);
    vector<int> res = bfs(graph, 0);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}

TEST(testCase, testDFS) {
    auto graph = Graph("../static/graph_input_2.in", false);
    vector<vector<int>> res = dfs(graph);
    for (auto vv : res) {
        for (int i = 0; i < vv.size(); i++) {
            cout << vv[i] << " ";
        }
        cout << endl;
    }
}


int main() {

    return RUN_ALL_TESTS();
}