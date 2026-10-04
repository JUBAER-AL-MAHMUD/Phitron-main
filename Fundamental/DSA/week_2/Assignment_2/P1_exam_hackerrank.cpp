#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_link_list(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_link_list(head, tail, val);
    }

    node *tmp = head;
    int diff;
    int maxi = head->val;
    int mini = head->val;
    while (tmp != NULL)
    {
        if (tmp->val > maxi)
        {
            maxi = tmp->val;
        }
        if (tmp->val < mini)
        {
            mini = tmp->val;
        }
        tmp = tmp->next;
    }
    diff = maxi - mini;
    cout << diff << endl;

    return 0;
}