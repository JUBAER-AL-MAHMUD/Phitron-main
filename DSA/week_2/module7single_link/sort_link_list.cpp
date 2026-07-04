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

void selection_sort(node *head)
{
    for (node *i = head; i->next != NULL; i = i->next)
    {
        node *minNode = i;

        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (j->val < minNode->val)
            {
                minNode = j;
            }
        }

        swap(i->val, minNode->val);
    }
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

    selection_sort(head);

    print_list(head);

    return 0;
}