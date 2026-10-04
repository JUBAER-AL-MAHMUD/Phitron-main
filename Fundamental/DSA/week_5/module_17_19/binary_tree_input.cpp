#include <bits/stdc++.h>
using namespace std;

class node {
    public:

    int val;
    node  *left;
    node  *right;
    
    node (int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* input_tree()
{
    int val;
    cin >> val;

    node *root = new node(val);
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        //ber kore ana

        node *p = q.front();
        q.pop();

        //oi node niye kaj 

        int l , r;
        cin >> l >> r;
        node *myLeft;
        node *myRight;

        if (l == -1) myLeft = NULL;
        else myLeft = new node(l);

        if (r == -1) myRight = NULL;
        else myRight = new node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);

    }
return root;

};

void level_order_print(node *root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
}

int main() 
{
    node *root = input_tree();
    level_order_print(root);

    return 0;
}