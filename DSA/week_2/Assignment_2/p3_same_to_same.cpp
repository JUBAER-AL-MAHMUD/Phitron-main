#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node *next;

    node (int val)
    {
        this->val=val;
        this->next=NULL;
    }

};

void insert_at_head(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;

    }
    tail->next=newnode;
    tail=newnode;
};
int main() 
{
    node *head1=NULL;
    node *tail1=NULL;
    node *head2=NULL;
    node *tail2=NULL;

    int val;
    
//1ST LINKED LIST
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }

        insert_at_head(head1,tail1,val);
    };

//2ND LINKED LIST

while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }

        insert_at_head(head2,tail2,val);

    };

    node *temp1=head1;
    node *temp2=head2;

    while (temp1!=NULL && temp2!=NULL)
    {
        if (temp1->val!=temp2->val)
        {
            cout<<"NO"<<endl;
            return 0;
        }

        temp1=temp1->next;
        temp2=temp2->next;
    }
    if (temp1==NULL && temp2==NULL)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}