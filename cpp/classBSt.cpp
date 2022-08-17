#include<bits/stdc++.h>
using namespace std;

class bst{
    int data;
    bst* left;
    bst* right;

    public:

    bst* createNewNode(int item){
        bst* newnode= new bst();
        newnode->data=item;
        newnode->left = NULL;
        newnode->right =NULL;
        return newnode;
    }

    bst* insert(bst* root,int item){
        if(root==NULL){
            root = createNewNode(item);
        }
            
        else if(item < root->data)
            root->left=insert(root->left,item);
        else
            root->right= insert(root->right,item);

        return root;
    }

    bst* Delete(bst*root,int item){
        if(root==NULL)
            return root;
        
    }
};