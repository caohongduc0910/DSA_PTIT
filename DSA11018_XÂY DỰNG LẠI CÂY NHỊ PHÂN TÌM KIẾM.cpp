#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node {
    int val;
    node* right;
    node* left;
    node(int x) {
        val = x;
        left = right = NULL;
    }
};


void insertNode(node* &root, int x) {
    if (root == NULL) {
        root = new node(x);
        return;
    }
    else {
        if (root -> val > x)
            insertNode(root -> left, x);
        else
            insertNode(root -> right, x);
    }
}

void preOrder(node* root) {
    if (root == NULL) return;
    cout << root -> val << ' ';
    if (root -> left) preOrder(root->left);
    if (root -> right) preOrder(root->right);
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        node* root = NULL;
        while (n--) {
            int x; cin >> x;
            insertNode(root, x);
        }
        preOrder(root);
        cout << endl;
    }
    return 0;
}