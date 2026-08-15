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

// node count

int Nodecount(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return Nodecount(root->left) + Nodecount(root->right) + 1;
}

// node depth

int maxDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    return max(leftDepth, rightDepth) + 1;
}

int main()
{
    TreeNode *root = input_tree();

    int count = Nodecount(root);
    int depth = maxDepth(root);

    int totalnode = pow(2, depth) - 1;

    if (count == totalnode)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}