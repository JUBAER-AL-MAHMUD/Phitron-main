#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    TreeNode *root = new TreeNode(val);

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        TreeNode *myLeft;
        TreeNode *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new TreeNode(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new TreeNode(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}

void serialofleaf(TreeNode *root, vector<int> &leaf)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        leaf.push_back(root->val);
        return;
    }
    serialofleaf(root->left, leaf);
    serialofleaf(root->right, leaf);
}

int main()
{
    TreeNode *root = input_tree();

    vector<int> leaf;
    serialofleaf(root, leaf);
    sort(leaf.begin(), leaf.end(), greater<int>());
    for (int i = 0; i < leaf.size(); i++)
    {
        cout << leaf[i] << " ";
    }
    return 0;
}