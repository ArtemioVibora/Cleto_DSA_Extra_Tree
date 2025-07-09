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
    TREE *center;
};

void addRootNode(TREE **pStart, int value) {
    *pStart = new TREE{int(value), nullptr, nullptr, nullptr};

}

void addNodeLeft(TREE *tree, int data) {
    tree->left = new TREE{data, nullptr, nullptr, nullptr};
}

void addNodeRight(TREE *tree, int data) {
    tree->right = new TREE{data, nullptr, nullptr, nullptr};
}

void addNodeCenter(TREE *tree, int data) {
    tree->center = new TREE{data, nullptr, nullptr, nullptr};
}

void printTree(TREE *tree) {
    if (tree== nullptr) {
        return;
    }
    cout << tree->value << endl;
    printTree(tree->left);
    printTree(tree->center);
    printTree(tree->right);
}

void chooseDirection(TREE *tree) {
    TREE *p;
    p = tree;

    int data;
    int input;
    bool flag = true;

    while (flag) {
        cout << "<1> Right" << endl;
        cout << "<2> Left" << endl;
        cout << "<3> Center" << endl;
        cout << "<4> Exit" << endl;
        cin >> input;
        switch (input) {
            case 1:
                cout << "Enter data" << endl;
                cin >> data;
                addNodeRight(p, data);
                flag = false;
                break;
            case 2:
                cout << "Enter data" << endl;
                cin >> data;
                addNodeLeft(p, data);
                flag = false;
                break;
            case 3:
                cout << "Enter data" << endl;
                cin >> data;
                addNodeCenter(p, data);
                flag = false;
                break;
            default:
                break;
        }
    }
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
                chooseDirection(root);
                break;
            case 2:
                printTree(root);
                break;
            default:
                break;
        }
    }
}

int main() {
    runProgram();
}