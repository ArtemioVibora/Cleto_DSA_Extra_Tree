#include <iostream>

/*
 * I am going to discard for this program, the C style
 * So instead of using NULL, I am going to use nullptr
 */

using namespace std;

struct TREE {
    int value;
    TREE *left;
    TREE *right;
    TREE *trunk;
};

void addRootNode(TREE **pStart, int value) {
    *pStart = new TREE{int(value), nullptr, nullptr, nullptr};

}

void addNode(TREE *tree, int d1, int d2, int d3) {
    tree->left = new TREE{d1, nullptr, nullptr, nullptr};
    tree->right = new TREE{d2, nullptr, nullptr, nullptr};
    tree->trunk = new TREE{d3, nullptr, nullptr, nullptr};
}

void printTree(TREE *tree) {
    if (tree== nullptr) {
        return;
    }
    cout << tree->value << endl;
    printTree(tree->left);
    printTree(tree->trunk);
    printTree(tree->right);
}

void runProgram() {
    TREE *root = nullptr;

    int input;
    int data;

    cout << "Enter number of root node: ";
    cin >> data;
    addRootNode(&root, data);

    while (input != 9) {
        cout << "<1> Add node" << endl;
        cout << "<2> Print tree" << endl;
        cout << "<9> Exit" << endl;
        cout << ">>>> ";
        cin >> input;
        switch (input) {
            case 1:
                break;
            case 2:
                break;
            default:
                break;
        }
    }
}

int main() {

}