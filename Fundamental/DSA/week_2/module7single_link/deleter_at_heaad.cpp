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

void delete_at_head(node *&head)
{
    if (head == NULL)
    {
        return;
    }

    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_list(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_at_tail(head, tail, val);
    }

    delete_at_head(head);

    print_list(head);

    return 0;
}