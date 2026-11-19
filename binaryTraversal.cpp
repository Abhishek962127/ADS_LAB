#include <bits/stdc++.h>
using namespace std;
template <typename type>
class Tree
{
    struct node
    {
        type data;
        node *left;
        node *right;
        node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
    };
public:
    node*root=NULL;
    Tree(){
        node*f=new node('F');
        node*b=new node('B');
        node*g=new node('G');
        node*a=new node('A');
        node*d=new node('D');
        node*i=new node('I');
        node*c=new node('C');
        node*e=new node('E');
        node*h=new node('H');
        f->left=b;
        f->right=g;

        b->left=a;
        b->right=d;

        g->right=i;

        d->right=e;
        d->left= c;

        i->left=h;

        root=f;
    }
    void preorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }

        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    void inorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    int count(node*root){
        if(root==NULL){
            return 0;
        }
        int left=count(root->left);
        int right=count(root->right);
        return left+right+1;
    }
};


int main()
{
    Tree<char> obj;

    if (obj.root == NULL)
    {
        cout << "Tree is empty!!";
    }
    else
    {
        cout << "\nPreorder Traversal:";
        obj.preorder(obj.root);
        cout << "\nInorder Traversal:";
        obj.inorder(obj.root);
        cout << "\nPostorder Traversal:";
        obj.postorder(obj.root);
    }

    cout<<"\n"<<obj.count(obj.root);
    return 0;
}