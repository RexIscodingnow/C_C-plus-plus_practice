/**
 * @file binary_tree.h
 * @brief 二元樹
 * @version 0.1
 * @date 2023-04-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;


// 用鏈結串列表示
template<typename T>
struct treeNode {
    T data;
    treeNode *left;
    treeNode *right;
};


// 二元搜尋樹
template<typename T>
class BinarySearchTree {
private:
    treeNode<T> *root;

    // 中序走訪
    void inOrder(treeNode<T> *root) {
        if (root != NULL) {
            inOrder(root->left);
            cout<<root->data;
            inOrder(root->right);
        }
    }
    // 前序走訪
    void preOrder(treeNode<T> *root) {
        if (root != NULL) {
            cout<<root->data;
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    // 後序走訪
    void postOrder(treeNode<T> *root) {
        if (root != NULL) {
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data;
        }
    }

public:
    BinarySearchTree() {
        this->root = NULL;
    }

    // 加上新節點
    void addNode(T value);

    // 中序走訪
    void in_order();
    // 前序走訪
    void pre_order();
    // 後序走訪
    void post_order();
};

// ==================================================================
// ==================================================================

template<typename T>
void BinarySearchTree<T>::addNode(T value) {
    treeNode<T> *new_node = new treeNode<T>;
    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;

    // 沒有樹根節點
    if (this->root == NULL) {
        this->root = new_node;
    }
    else {
        treeNode<T> *current = root;

        while (true) {
            // 往左子樹
            if (new_node->data < current->data) {
                if (current->left == NULL) {
                    current->left = new_node;
                    break;
                }
                else {
                    current = current->left;
                }
            }
            // 往右子樹
            else {
                if (current->right == NULL) {
                    current->right = new_node;
                    break;
                }
                else {
                    current = current->right;
                }
            }
        }
    }
}

// ==================================================================
// ==================================================================

template<typename T>
void BinarySearchTree<T>::in_order() {
    this->inOrder(this->root);
}

template<typename T>
void BinarySearchTree<T>::pre_order() {
    this->preOrder(this->root);
}

template<typename T>
void BinarySearchTree<T>::post_order() {
    this->postOrder(this->root);
}

