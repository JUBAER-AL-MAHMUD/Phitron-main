#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack
{
public:
    Node *head;
    Node *tail;

    Stack()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if (tail == NULL)
            return;

        if (head == tail)
        {
            delete tail;
            head = tail = NULL;
            return;
        }

        Node *deleteNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};

class Queue
{
public:
    Node *head;
    Node *tail;

    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if (head == NULL)
            return;

        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *deleteNode = head;
        head = head->next;
        head->prev = NULL;
        delete deleteNode;
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    Stack A;
    Queue B;

    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        A.push(val);
    }

    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        B.push(val);
    }

    if (N != M)
    {
        cout << "NO";
        return 0;
    }

    while (!A.empty())
    {
        if (A.top() != B.front())
        {
            cout << "NO"<< endl;
            return 0;
        }

        A.pop();
        B.pop();
    }

    cout << "YES"<< endl;

    return 0;
}