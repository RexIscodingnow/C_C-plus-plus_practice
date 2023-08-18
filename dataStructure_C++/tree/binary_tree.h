/**
 * @file binary_tree.h
 * @brief �G����
 * @version 0.1
 * @date 2023-04-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;


// ���쵲��C���
template<typename T>
struct treeNode {
    T data;
    treeNode *left;
    treeNode *right;
};


// �G���j�M��
template<typename T>
class BinarySearchTree {
private:
    treeNode<T> *root;

    // ���Ǩ��X
    void inOrder(treeNode<T> *root) {
        if (root != NULL) {
            inOrder(root->left);
            cout<<root->data;
            inOrder(root->right);
        }
    }
    // �e�Ǩ��X
    void preOrder(treeNode<T> *root) {
        if (root != NULL) {
            cout<<root->data;
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    // ��Ǩ��X
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

    // �[�W�s�`�I
    void addNode(T value);

    // ���Ǩ��X
    void in_order();
    // �e�Ǩ��X
    void pre_order();
    // ��Ǩ��X
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

    // �S����ڸ`�I
    if (this->root == NULL) {
        this->root = new_node;
    }
    else {
        treeNode<T> *current = root;

        while (true) {
            // �����l��
            if (new_node->data < current->data) {
                if (current->left == NULL) {
                    current->left = new_node;
                    break;
                }
                else {
                    current = current->left;
                }
            }
            // ���k�l��
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

