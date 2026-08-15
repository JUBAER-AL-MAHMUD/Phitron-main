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

void levelNodes(TreeNode *root, int X)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<TreeNode *> q;
    q.push(root);

    for (int i = 0; i < X; i++)
    {
        int n = q.size();
        for (int j = 0; j < n; j++)
        {
            TreeNode *p = q.front();
            q.pop();

            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }

        if (q.empty())
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    while (!q.empty())
    {
        cout << q.front()->val << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    TreeNode *root = input_tree();
    int X;
    cin >> X;
    levelNodes(root, X);

    return 0;
}