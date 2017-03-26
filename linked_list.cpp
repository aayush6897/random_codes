#include <iostream>
#include <bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node* next;
}*top=NULL;

void push()
{
    node *x=new node;
    cout<<"enter data:-";
    cin>>x->data;
    if(top==NULL)
    {
        top=x;
        x->next=NULL;
    }
    else
    {
        x->next=top;
        top=x;
    }
}

void dele()
{
    node *y=new node;
    node *z=new node;
    int temp;
    cout<<"enter element to delete:- ";
    cin>>temp;
    y=top;
    while(y->data!=temp)
    {
        z=y;
        y=y->next;
    }
    z->next=y->next;
    delete(y);
}

void display()
{
    node *f=new node;
    f=top;
    cout<<"\ncurrent linked list\n";
    while(f->next!=NULL)
    {
        cout<<f->data<<"  ";
        f=f->next;

    }
    cout<<f->data<<endl;
}


int main()
{
    cout << "Hello world!" << endl;
    int c;
    while(1)
    {
        cout<<"\n1->insert\n2->delete\n3->display\n4->exit\n";
        cout<<"enter your choice:-";
        cin>>c;
        switch(c)
        {
            case 1:push();
                    break;
            case 2:
                dele();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default :
                cout<<"\nwrong choice!";
        }
    }
    display();
    return 0;
}
