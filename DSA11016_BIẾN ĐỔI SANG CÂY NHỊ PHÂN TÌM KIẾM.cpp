#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// struct node {
//     int val;
//     node* right;
//     node* left;
//     node(int x) {
//         val = x;
//         left = right = NULL;
//     }
// };

// void makeRoot(node* root, int u, int v, char c) {
//     if (c == 'L') root -> left = new node(v);
//     else root-> right = new node(v);
// }

// void insertNode(node* root, int u, int v, char c) {
//     if (root == NULL) return;
//     if (root->val == u) {
//         makeRoot(root, u, v, c);
//     }
//     else {
//         insertNode(root -> left, u, v, c);
//         insertNode(root -> right, u, v, c);
//     }
// }

// int cntLeaf(node* root) {
//     if (root == NULL)
//         return 0;
//     if (root -> left == NULL && root-> right == NULL)
//         return 1;
//     return cntLeaf(root -> left) + cntLeaf(root-> right);
// }

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set <int> se;
        while (n--) {
            int u, v; char c;
            cin >> u >> v >> c;
            se.insert(u);
            se.insert(v);
        }
        for (int x : se) cout << x << ' ';
        cout << endl;
    }
    return 0;
}