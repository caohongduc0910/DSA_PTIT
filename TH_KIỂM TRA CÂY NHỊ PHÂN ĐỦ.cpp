#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node {
    int val;
    node* left;
    node* right;
    node(int x) {
        val = x;
        left = right = NULL;
    }
};

void makeRoot(node* root, int u, int v, char c) {
    if (c == 'L') root -> left = new node(v);
    else root -> right = new node(v);
}

void insertNode(node* root, int u, int v, char c) {
    if (root == NULL) return;
    if (root -> val == u) makeRoot(root, u, v, c);
    else {
        insertNode(root -> left, u, v, c);
        insertNode(root -> right, u, v, c);
    }
}

bool FullTree(node* root) {
    if (root == NULL) return true;
    if (root -> left == NULL && root -> right == NULL) {
        return true;
    }
    if (root -> left && root -> right) {
        return FullTree(root -> left) && FullTree(root ->right);
    }
    return false;
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        node* root = NULL;
        int n; cin >> n;
        while (n--) {
            int u, v; char c;
            cin >> u >> v >> c;
            if (root == NULL) {
                root = new node(u);
                makeRoot(root, u, v, c);
            }
            else {
                insertNode(root, u, v, c);
            }
        }
        if (FullTree(root)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}