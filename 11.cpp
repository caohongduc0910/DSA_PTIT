#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node {
    int data;
    node *right;
    node *left;
    node (int x) {
        data = x;
        right = left = NULL;
    }
};

void makeRoot(node *root, int u, int v, char c) {
    if (c == 'L')
        root -> left = new node(v);
    else
        root -> right = new node(v);
}

void insertNode(node *root, int u, int v, char c) {
    if (root == NULL) return;
    if (root -> data == u)
        makeRoot(root, u, v, c);
    else {
        insertNode(root -> left, u, v, c);
        insertNode(root -> right, u, v, c);
    }
}

void spiral(node *root) {
    stack <node*> st1, st2;
    st1.push(root);
    while (!st1.empty() || !st2.empty()) {
        while (!st1.empty()) {
            node *temp = st1.top(); st1.pop();
            cout << temp->data << ' ';
            if (temp -> right != NULL)
                st2.push(temp -> right);
            if (temp -> left != NULL)
                st2.push(temp -> left);
        }
        while (!st2.empty()) {
            node *temp = st2.top(); st2.pop();
            cout << temp->data << ' ';
            if (temp -> left != NULL)
                st1.push(temp -> left);
            if (temp -> right != NULL)
                st1.push(temp -> right);
        }
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int u, v; char c;
        node *root = NULL;
        for (int i = 0; i < n; i++) {
            cin >> u >> v >> c;
            if (root == NULL) {
                root = new node(u);
                makeRoot(root, u, v, c);
            }
            else insertNode(root, u, v, c);
        }
        spiral(root);
        cout << endl;
    }
    return 0;
}