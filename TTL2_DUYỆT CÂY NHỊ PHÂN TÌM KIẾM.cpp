#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node {
    int data;
    node *left;
    node *right;
    node (int x) {
        data = x;
        left = right = NULL;
    }
};

void insertNode(node *&root, int x) {
    if (root == NULL) {
        root = new node(x);
        return;
    }
    if (x > root -> data) {
        insertNode(root -> right, x);
    }
    else insertNode(root -> left, x);
}

void preOrder(node *root) {
    if (root != NULL) {
        cout << root -> data << ' ';
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        node *root = new node(a[0]);
        for (int i = 1; i < n; i++) {
            insertNode(root, a[i]);
        }
        preOrder(root);
        cout << endl;
    }
    return 0;
}