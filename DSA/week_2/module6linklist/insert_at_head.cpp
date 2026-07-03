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

void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void insert_at_head(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}
int main()
{
    node *head = new node(10);
    node *a = new node(100);
    node *b = new node(1000);

    head->next = a;
    a->next = b;
    insert_at_head (head, 1);
    print_list (head);

    return 0;
}