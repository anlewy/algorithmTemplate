//
// @author anlewy@qq.com
// @create 2021/2/21 10:38 下午
//

class BinarySearchTree {
    int key;
    BinarySearchTree *left, *right;
    BinarySearchTree() { }
    BinarySearchTree(int e): key(e) { }
};

struct TreeNode {
    int key;
    TreeNode *left, *right;
    TreeNode(): key(0), left(nullptr), right(nullptr) {}
    TreeNode(int v): key(v), left(nullptr), right(nullptr) {}
};

TreeNode *insert(TreeNode *root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }
    if (value <= root->key) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

TreeNode *search(TreeNode *root, int target) {
    if (root == nullptr) {
        return nullptr;
    } else if (root->key == target) {
        return root;
    } else if (target < root->key) {
        return search(root->left, target);
    } else {
        return search(root->right, target);
    }
}

TreeNode *delete(TreeNode *root, int target) {
    return nullptr;
}