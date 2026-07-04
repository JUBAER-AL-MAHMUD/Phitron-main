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

void insert_at_tail(node *&head, int val)
{
    node *newNode = new node(val);
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int main()
{
    node *head = new node(10);
    node *a = new node(100);
    node *b = new node(1000);

    head->next = a;
    a->next = b;
    insert_at_tail (head, 2000);
    print_list (head);

    return 0;
}