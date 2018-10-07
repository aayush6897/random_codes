#include <iostream>
 
using namespace std;
struct bst
{
    int data;
    bst* left;
    bst* right;
};

bst* root = NULL;

bst* newnode(int data)
{
    bst* aa=new bst();
    aa->data=data;
    aa->left=aa->right=NULL;
    return aa;
}
bst* insert(bst* root, int data)
{
    if (root==NULL)
    {
        root=newnode(data);
    }
    else
    {
        if (root->data<=data)
            root->right=insert(root->right,data);
        else
            root->left=insert(root->left,data);
    }
    return root;
}

int sear(bst* s, int d)
{
    if(s->data==d)
    {cout<<"Found!";return 0;}
    else
    {
        if(d<s->data&&s->left!=NULL)
            sear(s->left,d);
        else
            if(s->right!=NULL)
            sear(s->right,d);
    }
    
}
int main()
{
    root=insert(root,15);
    root=insert(root,16);
    root=insert(root,18);
    root=insert(root,5);
    root=insert(root,1);
    root=insert(root,155);
    root=insert(root,156);

    sear(root,180);
    return 0;
}
