#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1)
        return NULL;
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void inorder(node* root){
    //LNR
    //base case
    if(root==NULL){
        return;
    }
    inorder(root->left);//L
    cout<<root->data<<" ";//N
    inorder(root->right);//R
}
void preorder(node* root){
    //NLR
    //base
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
void postorder(node* root){
    //LRN
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root = NULL;
    root = buildTree(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}