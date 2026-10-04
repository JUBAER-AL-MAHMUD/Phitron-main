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

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        node *head = NULL;
        node *tail = NULL;

        int val;

        // Build the linked list
        while (true)
        {
            cin >> val;

            if (val == -1)
            {
                break;
            }

            insert_link_list(head, tail, val);
        }

        // Read the value to search
        int X;
        cin >> X;

        node *temp = head;
        int index = 0;
        bool found = false;

        // Search for X
        while (temp != NULL)
        {
            if (temp->val == X)
            {
                cout << index << endl;
                found = true;
                break;
            }

            temp = temp->next;
            index++;
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}