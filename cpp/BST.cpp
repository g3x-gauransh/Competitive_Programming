#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node * createNewNode(int item){
    node * newNode = new node();
    newNode->data = item;
    newNode->left=NULL;
    newNode->right = NULL;
    return newNode;
}

node* insert(node* root,int item){
    if(root==NULL){
        root = createNewNode(item);
        return root;
    }
    else if(item<= root->data)
        root->left = insert(root->left,item);
    else
        root->right = insert(root->right,item);
    
    return root;
}

node * minimum(node * root){
    while(root->left!=NULL)
    {
        root = root->left;
    }
    return root;
}

node * maximum(node * root){
    while(root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

bool search(node* root,int item){
    if(root== NULL)
        return false;
    else if(item == root->data)     return true;

    else if(item <= root->data)  return search(root->left,item);

    else return search(root->right,item);
}

int findHeight(node * root){
    if(root == NULL)
        return -1;
    
    return max(findHeight(root->left),findHeight(root->right)) +1;
}

void levelOrder(node* root){
    if(root==NULL)
        return ;
    
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* ele=q.front();
        cout<<ele->data<<" ";
        if(ele->left!=NULL)     
            q.push(ele->left);
        if(ele->right!=NULL)    
            q.push(ele->right);

        q.pop();
    }
}

void preOrder(node* root){
    if(root==NULL)  
        return;
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node* root){
    if(root==NULL)
        return ;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(node* root){
    if(root==NULL)
        return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

bool isBinaryUtil(node* root,int mini,int maxi){
    if(root==NULL)  
        return true;
    if(root->data>mini && root->data< maxi
         && isBinaryUtil(root->left,mini,root->data)
            && isBinaryUtil(root->right,root->data,maxi) )
                return true;
    else
        return false;
}

bool isBinarySTree(node* root){
    return isBinaryUtil(root,INT_MIN,INT_MAX);
}

node* Delete(node* root,int data){
    if(root==NULL)
        return root;
    else if(data<root->data)    root->left = Delete(root->left,data);
    else if(data>root->data)    root->right = Delete(root->right,data);

    else{
        if(root->right== NULL && root->left == NULL)
        {
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            node*temp = root;
            root=root->right;
            delete temp;    
        }
        else if(root->right==NULL){
            node*temp = root;
            root=root->left;
            delete temp;
        }
        else{
            node*temp = minimum(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}

node* Find(node* root,int data){
    if(root==NULL)  return NULL;
    else if(root->data<data)    return Find(root->right,data);
    else if(root->data>data)    return Find(root->left,data);
    else
        return root;
}

node* GetSuccessor(node* root,int data){
    node*current = Find(root,data);
    if(current == NULL) 
        return NULL;
    if(current->right != NULL)          //there is a right subtree
        return minimum(current->right);
    else{       //no right subtree
        node* successor = NULL;
        node*ancestor = root;
        while(current!=ancestor){
            if(current->data < ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else{
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}

void mirrortree(node* root){
    if(root==NULL)
        return ;

    mirrortree(root->left);
    mirrortree(root->right);
    swap(root->right,root->left);
}

void inorderItr(node *root){
        node* curr= root;
        stack<node*>s;
        while(!s.empty() || curr!=NULL){
            while(curr!=NULL){
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            cout<<curr->data<<" ";

            curr=curr->right;
        }
}

void postOrderItr(node* root){
    node* curr = root;
    stack<node*> s;
    stack<int> out;
    s.push(curr);
    while(!s.empty()){
        curr=s.top();
        s.pop();
        out.push(curr->data);
        if(curr->left)
            s.push(curr->left);
        if(curr->right)
            s.push(curr->right);
    }
    while(!out.empty()){
        cout<<out.top()<<" ";
        out.pop();
    }
}

void inorderItr(node*root){
    node*curr = root;
    stack<node*>s;
    stack<int>out;
    s.push(curr);
    while(!s.empty()){
        curr=s.top();
        s.pop();
        if(curr->left)
            s.push(curr->left);
        if(curr->right) 
            s.push(curr->right);
    }
}

int main(){
    node* root=NULL;                //create tree
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,8);
    root = insert(root,7);
    root = insert(root,23);
    root = insert(root,25);
    
    // int n;               //search tree
    // cin>>n;
    // if(search(root,n))
    //     cout<<"True";
    // else
    //     cout<<"False";


    // node * mini = minimum(root);         //max and min of the tree
    // cout<<mini->data<<endl;
    // node * mx= maximum(root);
    // cout<<mx->data<<endl;

    // cout<<findHeight(root)<<endl;            //height of tree

    // //levelOrder(root);              //traversal bfs
    // preOrder(root);                  //dfs
    // cout<<endl;
    // inOrder(root);
    // cout<<endl;
    // postOrder(root);
    // cout<<endl;

    //cout<<isBinarySTree(root);          //check binary tree
    // root = Delete(root,1);          //delete any node
    // inOrder(root);

    // root = GetSuccessor(root,8); // get the next ancestor of inorder traversal of the node
    // cout<<root->data;

    //inorderItr(root);
    postOrderItr(root);
    return 0;
}