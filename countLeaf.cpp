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
    
    

    int countLeaf(node*root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int left=countLeaf(root->left);
        int right=countLeaf(root->right);
        return right+left;
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
      
      cout<<obj.countLeaf(obj.root)<<endl;
    }

    
    return 0;
}