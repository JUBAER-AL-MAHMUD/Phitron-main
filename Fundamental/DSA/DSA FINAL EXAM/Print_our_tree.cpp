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

        if (l == -1)
            p->left = NULL;
        else
            p->left = new TreeNode(l);

        if (r == -1)
            p->right = NULL;
        else
            p->right = new TreeNode(r);

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}

void leftSide(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;

    v.push_back(root->val);

    if (root->left)
        leftSide(root->left, v);
    else
        leftSide(root->right, v);
}

void rightSide(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;

    v.push_back(root->val);

    if (root->right)
        rightSide(root->right, v);
    else
        rightSide(root->left, v);
}

int main()
{
    TreeNode *root = input_tree();

    vector<int> left;
    vector<int> right;

    leftSide(root, left);
    rightSide(root, right);

    if (root->left == NULL)
    {
        for (int i = 0; i < right.size(); i++)
        {
            cout << right[i] << " ";
        }
    }
    else if (root->right == NULL)
    {
        for (int i = left.size() - 1; i >= 0; i--)
        {
            cout << left[i] << " ";
        }
    }
    else
    {
        for (int i = left.size() - 1; i >= 0; i--)
        {
            cout << left[i] << " ";
        }

        for (int i = 1; i < right.size(); i++)
        {
            cout << right[i] << " ";
        }
    }

    cout << endl;

    return 0;
}