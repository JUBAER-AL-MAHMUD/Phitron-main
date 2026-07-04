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

void insert_at_tail(node *&head,node *&tail, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
int main()
{
    node *head = new node(10);
    node *a = new node(100);
    node *b = new node(1000);
    node *tail = b;

    head->next = a;
    a->next = b;
    insert_at_tail (head,tail,2000);
     insert_at_tail (head,tail,4000);
    print_list (head);

    return 0;
}