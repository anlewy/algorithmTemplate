//
// @author anlewy@qq.com 
// @create 2021/2/23 8:48 下午
//

#ifndef ALGORITHMTEMPLATE_TOOLS_H
#define ALGORITHMTEMPLATE_TOOLS_H

#include <vector>

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

#endif //ALGORITHMTEMPLATE_TOOLS_H
