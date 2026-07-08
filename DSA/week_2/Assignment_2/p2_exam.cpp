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
};

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        node *head = NULL;
        node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }

            insert_link_list(head, tail, val);
        }

        int X;
        cin >> X;
        node *tmp = head;
        int idx = 0;
        bool flag = false;
        while (tmp != NULL)
        {
            if (tmp->val == X)
            {
                cout << idx << endl;
                flag = true;
                break;
            }
            tmp = tmp->next;
            idx++;
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}