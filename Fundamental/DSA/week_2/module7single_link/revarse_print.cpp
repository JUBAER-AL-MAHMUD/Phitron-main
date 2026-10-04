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

void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_reverse(node *head)
{
    if (head == NULL)
    {
        return;
    }

    print_reverse(head->next);
    cout << head->val << " ";
}

int main()
{
    int n;
    cin >> n;

    node *head = NULL;
    node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_at_tail(head, tail, val);
    }

    print_reverse(head);

    return 0;
}